#!/usr/bin/python3
# -*- coding: utf-8 -*-
import rclpy
from rclpy.executors import ExternalShutdownException
from amsagv.ams import Node
from rclpy.qos import QoSProfile, DurabilityPolicy
from amsagv_msgs.msg import TagsStamped
from nav_msgs.msg import Path
from geometry_msgs.msg import PoseStamped
from amsagv.graph import Graph



def main():
    def handle_path(msg):
        if len(msg.tags):
            path = [x.tag.id for x in msg.tags]
            p = g.get_path(path)
            msg_path = Path()
            msg_path.header.frame_id = param_world_frame_id
            msg_path.header.stamp = node.get_clock().now().to_msg()
            for i in range(p.shape[1]):
                pose = PoseStamped()
                pose.pose.position.x = float(p[0,i])
                pose.pose.position.y = float(p[1,i])
                msg_path.poses.append(pose)
            pub_path.publish(msg_path)



    rclpy.init()
    node = Node('path_converter')
    
    try:
        # Name of the world frame
        param_world_frame_id = node.declare_parameter('world_frame_id', 'world').value

        g = Graph()

        # Latched topics: late subscribers (with transient-local durability) also receive the last message
        qos_latched = QoSProfile(depth=10, durability=DurabilityPolicy.TRANSIENT_LOCAL)

        # Publisher of the path
        pub_path = node.create_publisher(Path, 'path', qos_latched)
        # Subscriber to the path, which is given as a list of tag IDs
        sub_path_tags = node.create_subscription(TagsStamped, 'path_tags', handle_path, qos_latched)

        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()



if __name__ == '__main__':
    main()
