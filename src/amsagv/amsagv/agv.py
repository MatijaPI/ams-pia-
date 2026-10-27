#!/usr/bin/python3
# -*- coding: utf-8 -*-
import math
import rclpy
from rclpy.executors import ExternalShutdownException
from amsagv.ams import Node, qos_cmd, qos_sensor
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from amsagv_msgs.msg import LineStamped
from amsagv.ams import pose_to_msg, get_frame_prefix
from amsagv.agvapi import Agv, find_line_edges



TICKS_PER_M = 116845.0  # Pulzov na meter poti kolesa
L_AGV = 0.1207          # Razmik med kolesoma [m]



def main():
    with Agv() as robot:
        # Handle velocity commands
        def handle_cmd_vel(msg):
            robot.set_vel(msg.linear.x, msg.angular.z)



        # Main loop, executed at 50 Hz
        def handle_timer():
            nonlocal x, y, phi, gamma, fd, enc_prev, t_prev
            now = node.get_clock().now()
            t = now.to_msg()

            # Read sensors
            robot.read_sensors()

            #
            # Odometry
            #

            r = 0.02336 # Polmer kolesa [m]
            L = 0.1207  # Razmik med kolesoma [m]

            def wheel_to_vel(r, L, wR, wL):
                v = r * (wR + wL) / 2.0
                w = r * (wR - wL) / L

            # Encoders
            enc_left, enc_right, enc_heading = robot.get_encoders()

            # Kot sprednjega dela (gamma): 8191 ~ 360 stopinj, 14-bitno predznačeno število
            gamma = enc_heading / 8191.0 * 2.0 * math.pi
            gamma = math.atan2(math.sin(gamma), math.cos(gamma))

            if enc_prev is not None:
                # Levo kolo ima obrnjen predznak
                d_left = -(enc_left - enc_prev[0]) / TICKS_PER_M
                d_right = (enc_right - enc_prev[1]) / TICKS_PER_M
                ds = (d_right + d_left) / 2.0
                dphi = (d_right - d_left) / L_AGV
                # Integracija po srednjem kotu (midpoint)
                x += ds * math.cos(phi + dphi / 2.0)
                y += ds * math.sin(phi + dphi / 2.0)
                phi = math.atan2(math.sin(phi + dphi), math.cos(phi + dphi))
                fd += ds
                dt = (now - t_prev).nanoseconds * 1e-9
                if dt > 0.0:
                    msg_odom.twist.twist.linear.x = ds / dt
                    msg_odom.twist.twist.angular.z = dphi / dt
            enc_prev = (enc_left, enc_right)
            t_prev = now

            # Odometry message
            msg_odom.header.stamp = t
            msg_odom.pose.pose = pose_to_msg(x, y, phi)
            # Publish odometry message
            pub_odom.publish(msg_odom)

            #
            # Line sensor
            #

            # Line-sensor values
            line_values = robot.get_line_values()
            # Left and right line edge
            edge_left, edge_right = find_line_edges(line_values)

            # Line-sensor message
            msg_line.header.stamp = t
            msg_line.line.values = line_values
            msg_line.line.left = float(edge_left) if edge_left is not None else float('nan')
            msg_line.line.right = float(edge_right) if edge_right is not None else float('nan')
            msg_line.line.heading = gamma
            msg_line.line.distance = fd
            # Publish line-sensor message
            pub_line.publish(msg_line)



        rclpy.init()
        node = Node('agv')
        
        try:
            prefix = get_frame_prefix(node)
            # Name of the odometry frame
            param_odom_frame_id = node.declare_parameter('odom_frame_id', f'{prefix}odom').value
            # Name of the AGV frame
            param_agv_frame_id = node.declare_parameter('agv_frame_id', f'{prefix}agv').value

            # Odometry publisher
            pub_odom = node.create_publisher(Odometry, 'odom', qos_sensor)
            # Line sensor publisher
            pub_line = node.create_publisher(LineStamped, 'line', qos_sensor)
            # Velocity commands subscriber.
            sub_cmd_vel = node.create_subscription(Twist, 'cmd_vel', handle_cmd_vel, qos_cmd)

            # Line-sensor message
            msg_line = LineStamped()

            # Odometry message
            msg_odom = Odometry()
            msg_odom.header.frame_id = param_odom_frame_id
            msg_odom.child_frame_id = param_agv_frame_id

            # Odometry initial state
            x, y, phi, gamma = 0.0, 0.0, 0.0, 0.0 # Robot configuration
            fd = 0.0 # Travelled distance of the front cart
            enc_prev = None # Previous encoder values
            t_prev = None

            timer = node.create_timer(1.0/50.0, handle_timer)

            rclpy.spin(node)
        except (KeyboardInterrupt, ExternalShutdownException):
            pass
        finally:
            node.destroy_node()
            if rclpy.ok():
                rclpy.shutdown()



if __name__ == '__main__':
    main()
