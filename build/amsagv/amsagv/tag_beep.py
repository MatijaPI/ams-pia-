#!/usr/bin/python3
# -*- coding: utf-8 -*-
import rclpy
from rclpy.executors import ExternalShutdownException
from amsagv.ams import Node
from amsagv_msgs.msg import TagStamped
from ament_index_python.packages import get_package_share_directory
import subprocess
import os



def main():
    path = os.path.join(get_package_share_directory('amsagv'), 'data', 'complete.oga')

    def handle_tag(msg):
        print('Tag ID: {}'.format(msg.tag.id))
        subprocess.call(['paplay', path])



    rclpy.init()
    node = Node('tag_beep')
    
    try:

        # Tag subscriber
        sub = node.create_subscription(TagStamped, 'tag', handle_tag, 10)

        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()



if __name__ == '__main__':
    main()
