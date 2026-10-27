#!/usr/bin/python3
# -*- coding: utf-8 -*-
import rclpy
from rclpy.executors import ExternalShutdownException
from amsagv.ams import Node
from rclpy.time import Time
from rclpy.qos import QoSProfile, DurabilityPolicy
import tf2_ros
from geometry_msgs.msg import TransformStamped
from nav_msgs.msg import Path
from geometry_msgs.msg import PoseStamped
from amsagv_msgs.msg import TagStamped, TagsStamped

from amsagv.graph import Graph

class TagConverter(object):
    def __init__(self, node):
        self._node = node
        self._graph = Graph()
    
        self._last_stamp = None
    
        self._tf_buffer = tf2_ros.Buffer()
        self._tf_listener = tf2_ros.TransformListener(self._tf_buffer, node)
  
        # Name of the world frame
        self._world_frame_id = node.declare_parameter('world_frame_id', 'world').value
        # Name of the robot frame
        self._robot_frame_id = node.declare_parameter('robot_frame_id', 'robot').value
        # Latched topics: late subscribers (with transient-local durability) also receive the last message
        qos_latched = QoSProfile(depth=10, durability=DurabilityPolicy.TRANSIENT_LOCAL)

        # Publisher of the start and goal tag ID (the first and the last tag in the list). The message is published when a new goal is set and the start node is known.
        self._pub_start_goal = node.create_publisher(TagsStamped, 'start_goal_tag', 10)
        # Publisher of the path.
        self._pub_path = node.create_publisher(Path, 'path', qos_latched)
        # Subscriber to the path, which is given as a list of tag IDs.
        self._sub_path_tags = node.create_subscription(TagsStamped, 'path_tags', self._handle_path, qos_latched)
        # Subscriber to the goal pose.
        self._sub_goal = node.create_subscription(PoseStamped, 'goal', self._handle_goal, 10)
        # Subscriber to the goal tag.
        self._sub_goal_tag = node.create_subscription(TagStamped, 'goal_tag', self._handle_goal_tag, 10)

    def _handle_path(self, msg):
        path = [x.tag.id for x in msg.tags]

        if len(path):
            p = self._graph.get_path(path)
            msg_path = Path()
            msg_path.header.frame_id = self._world_frame_id
            msg_path.header.stamp = self._node.get_clock().now().to_msg()
            for i in range(p.shape[1]):
                pose = PoseStamped()
                pose.pose.position.x = float(p[0,i])
                pose.pose.position.y = float(p[1,i])
                msg_path.poses.append(pose)
            self._pub_path.publish(msg_path)
      
    def _handle_goal(self, msg):
        p = (msg.pose.position.x, msg.pose.position.y)
        best = self._graph.find_closest_node(p, self._graph.det_tags)
        if best is not None:
            start_tag = self._get_start_tag()
            if start_tag is not None:
                self._publish_start_goal(start_tag, best[0])
            
    def _handle_goal_tag(self, msg):
        goal_tag = msg.tag.id
        start_tag = self._get_start_tag()  
        if start_tag is not None:
            self._publish_start_goal(start_tag, goal_tag)
      
    def _publish_start_goal(self, start_tag, goal_tag):
        msg = TagsStamped()

        tag = TagStamped()
        tag.tag.id = int(start_tag)
        msg.tags.append(tag)

        tag = TagStamped()
        tag.tag.id = int(goal_tag)
        msg.tags.append(tag)

        self._pub_start_goal.publish(msg)
      
    def _get_start_tag(self):
        start_tag = None
        try:
            trans = self._tf_buffer.lookup_transform(self._world_frame_id, self._robot_frame_id, Time())
            if self._last_stamp != trans:
                ps = (trans.transform.translation.x, trans.transform.translation.y)
                best = self._graph.find_closest_node(ps, self._graph.det_tags)
                if best is not None:
                    start_tag = best[0]
                self._last_stamp = trans.header.stamp
        except tf2_ros.TransformException:
            pass
    
        return start_tag

def main():
    rclpy.init()
    node = Node('tag_converter')
    
    try:
        tag_converter = TagConverter(node)
        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()



if __name__ == '__main__':
    main()
