#!/usr/bin/python3
import rclpy
from rclpy.executors import ExternalShutdownException
from amsagv.ams import Node
import tf2_ros
from geometry_msgs.msg import PoseWithCovarianceStamped, TransformStamped
from amsagv.ams import get_frame_prefix



def main():
    def handle_initial_pose(msg):
        st.header = msg.header
        st.transform.translation.x = msg.pose.pose.position.x
        st.transform.translation.y = msg.pose.pose.position.y
        st.transform.translation.z = msg.pose.pose.position.z
        st.transform.rotation = msg.pose.pose.orientation

        broadcaster.sendTransform(st)



    rclpy.init()
    node = Node('set_odom_frame')
    
    try:

        st = TransformStamped()
        st.child_frame_id = f'{get_frame_prefix(node)}odom'
        broadcaster = tf2_ros.StaticTransformBroadcaster(node)

        # Initial pose subscriber
        sub_initial_pose = node.create_subscription(PoseWithCovarianceStamped, 'initial_pose', handle_initial_pose, 10)

        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()



if __name__ == '__main__':
    main()
