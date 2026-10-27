#!/usr/bin/python3
# -*- coding: utf-8 -*-
import rclpy
from rclpy.executors import ExternalShutdownException
from amsagv.ams import Node
from geometry_msgs.msg import Twist
from amsagv_msgs.msg import LineStamped, TagStamped
from math import pi, sin, cos, isnan
from amsagv.world import MTAG



def main():
    tag = None

    # Handle line sensor
    def handle_line(msg):
        print(msg.line.left, msg.line.right)

        v, w = 0.0, 0.0

        # Velocity commands message
        msg_cmd_vel = Twist()
        msg_cmd_vel.linear.x = v
        msg_cmd_vel.angular.z = w
        # Publish velocity commands
        pub_cmd_vel.publish(msg_cmd_vel)



    def handle_tag(msg):
        nonlocal tag
        tag = MTAG.get(msg.tag.id, None)
        print('New tag: {} -> {}'.format(msg.tag.id, tag))



    rclpy.init()
    node = Node('control_line')
    
    try:

        # Velocity commands publisher.
        pub_cmd_vel = node.create_publisher(Twist, 'cmd_vel', 1)
        # Line sensor subscriber
        sub_line = node.create_subscription(LineStamped, 'line', handle_line, 1)
        # Tag subscriber
        sub_tag = node.create_subscription(TagStamped, 'tag', handle_tag, 10)

        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()



if __name__ == '__main__':
    main()
