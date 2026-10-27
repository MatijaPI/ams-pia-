#!/usr/bin/python3
# -*- coding: utf-8 -*-
import rclpy
from rclpy.executors import ExternalShutdownException
from amsagv.ams import Node
from rclpy.time import Time
import tf2_ros
from geometry_msgs.msg import PoseStamped
from amsagv_msgs.msg import TagStamped, TagsStamped
from functools import partial

from amsagv.graph_gen import find_closest_node



class TagsConverters(object):
    def __init__(self, node):
        self._tf_buffer = tf2_ros.Buffer()
        self._tf_listener = tf2_ros.TransformListener(self._tf_buffer, node)
  
        # Name of the world frame
        self._world_frame_id = node.declare_parameter('world_frame_id', 'world').value
        # Names of the robot
        self._robot_names = node.declare_parameter('robot_names', 'robot').value.split(' ')
        # Names of the robot frames
        self._robot_frame_ids = node.declare_parameter('robot_frame_ids', 'robot').value.split(' ')

        self._pub_start_goal = {}
        self._sub_goal = {}
        self._sub_goal_tag = {}
        self._last_stamp = {}

        for name, frame in zip(self._robot_names, self._robot_frame_ids):
            # Publisher of the start and goal tag ID (the two values are separated by a comma). The message is published when a new goal is set and the start node is known.
            self._pub_start_goal[frame] = node.create_publisher(TagsStamped, '{}/start_goal_tag'.format(name), 10)
            # Subscriber to the goal pose.
            self._sub_goal[frame] = node.create_subscription(PoseStamped, '{}/goal'.format(name), partial(self._handle_goal, frame=frame), 10)
            # Subscriber to the goal tag.
            self._sub_goal_tag[frame] = node.create_subscription(TagStamped, '{}/goal_tag'.format(name), partial(self._handle_goal_tag, frame=frame), 10)
            self._last_stamp[frame] = None

    def _handle_goal(self, msg, frame=None):
        p = (msg.pose.position.x, msg.pose.position.y)
        best = find_closest_node(p)
        if best is not None:
            start_tag = self._get_start_tag(frame)
            if start_tag is not None:
                self._publish_start_goal(start_tag, best[0], frame=frame)
            
    def _handle_goal_tag(self, msg, frame=None):
        goal_tag = msg.tag.id
        start_tag = self._get_start_tag(frame)
        if start_tag is not None:
            self._publish_start_goal(start_tag, goal_tag, frame=frame)
      
    def _publish_start_goal(self, start_tag, goal_tag, frame=None):
        msg = TagsStamped()

        tag = TagStamped()
        tag.tag.id = start_tag
        msg.tags.append(tag)

        tag = TagStamped()
        tag.tag.id = goal_tag
        msg.tags.append(tag)

        self._pub_start_goal[frame].publish(msg)
      
    def _get_start_tag(self, frame=None):
        start_tag = None
        try:
            trans = self._tf_buffer.lookup_transform(self._world_frame_id, frame, Time())
            if self._last_stamp[frame] != trans:
                ps = (trans.transform.translation.x, trans.transform.translation.y)
                best = find_closest_node(ps)
                if best is not None:
                    start_tag = best[0]
                self._last_stamp[frame] = trans.header.stamp
        except tf2_ros.TransformException:
            pass
    
        return start_tag



def main():
    rclpy.init()
    node = Node('tags_converters')
    
    try:
        tags_converters = TagsConverters(node)
        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()



if __name__ == '__main__':
    main()
