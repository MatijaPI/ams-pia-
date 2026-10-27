#!/usr/bin/python3
# -*- coding: utf-8 -*-
import rclpy
from rclpy.executors import ExternalShutdownException
from amsagv.ams import Node
import tf2_ros
from geometry_msgs.msg import TransformStamped
from amsagv_msgs.msg import LineStamped
from amsagv.ams import phi_to_quaternion_msg



AGVS = ['anthony', 'goran', 'jaka', 'klemen', 'luka', 'matic']

def main():
    def handle_line(msg):
        trans.header.stamp = node.get_clock().now().to_msg()
        trans.transform.rotation = phi_to_quaternion_msg(msg.line.heading)
        tf_broadcaster.sendTransform(trans)



    rclpy.init()
    node = Node('front')
    
    try:
        x = AGVS.index(node.get_namespace().strip('/'))

        trans = TransformStamped()

        trans.header.frame_id = 'front{}'.format(x)
        trans.child_frame_id = 'cart{}'.format(x)

        tf_broadcaster = tf2_ros.TransformBroadcaster(node)

        # Line sensor subscriber
        sub_line = node.create_subscription(LineStamped, 'line', handle_line, 1)

        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()



if __name__ == '__main__':
    main()
