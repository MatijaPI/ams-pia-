#!/usr/bin/python3
# -*- coding: utf-8 -*-
import rclpy
from rclpy.executors import ExternalShutdownException
from amsagv.ams import Node
from rclpy.qos import QoSProfile, DurabilityPolicy
from amsagv_msgs.msg import TagsStamped, ActionsStamped, TagStamped, ActionStamped
from amsagv.planning import Planning
from itertools import tee



def main():
    def handle_start_goal(msg):
        try:
            path = pp.find_path(msg.tags[0].tag.id, msg.tags[-1].tag.id)
            patha, pathb = tee(path)

            msg_path_tags = TagsStamped()
            for x in patha:
                path_tag = TagStamped()
                path_tag.tag.id = int(x)
                msg_path_tags.tags.append(path_tag)
            pub_path_tags.publish(msg_path_tags)

            actions = pp.generate_actions(list(pathb))
            msg_path_actions = ActionsStamped()
            for x in actions:
                path_action = ActionStamped()
                path_action.action.name = str(x[0])
                path_action.action.id = int(x[1])
                path_action.action.distance = float(x[2])
                msg_path_actions.actions.append(path_action)
            pub_path_actions.publish(msg_path_actions)
        except AttributeError:
            print('Error! Something went wrong :(')



    rclpy.init()
    node = Node('path_planning')
    
    try:

        pp = Planning()

        # Latched topics: late subscribers (with transient-local durability) also receive the last message
        qos_latched = QoSProfile(depth=10, durability=DurabilityPolicy.TRANSIENT_LOCAL)

        # Publisher of the path, which is given as a list of tag IDs
        pub_path_tags = node.create_publisher(TagsStamped, 'path_tags', qos_latched)
        # Publisher of the actions
        pub_path_actions = node.create_publisher(ActionsStamped, 'path_actions', qos_latched)
        # Subscriber to the start and goal tag ID
        sub_start_goal = node.create_subscription(TagsStamped, 'start_goal_tag', handle_start_goal, 10)

        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()



if __name__ == '__main__':
    main()
