#!/usr/bin/python3
# -*- coding: utf-8 -*-
'''Vozlisce AGV: branje senzorjev, odometrija in objava tem /odom ter /line.

Kinematicni model mAGV = TRICIKEL s prednjim diferencialnim vozickom:
  - prednji vozicek ima dve gnani kolesi z inkrementalnima enkoderjema
    -> iz njiju dobimo pot vozicka dd v vsakem koraku,
  - absolutni enkoder (enc_heading) meri kot vozicka gamma glede na ohisje,
  - poza (x, y, phi) se nanasa na SREDINO ZADNJE OSI ohisja,
  - D je medosna razdalja (zadnja os <-> os vrtenja vozicka).

Enacbe (zvezno):            Diskretno (korak Ts = 0,02 s):
  v   = v_s * cos(gamma)      ds   = dd * cos(gamma)
  phi' = v_s * sin(gamma)/D   dphi = dd * sin(gamma) / D
  x'  = v * cos(phi)          x   += ds * cos(phi + dphi/2)
  y'  = v * sin(phi)          y   += ds * sin(phi + dphi/2)

Ker kot vozicka merimo neposredno, odometrija NE potrebuje razmika koles
vozicka L (ta je le v agvapi.set_vel za pretvorbo ukazov v hitrosti koles).

Vse kalibracijske konstante so ROS parametri, zato jih v laboratoriju lahko
spreminjamo brez urejanja kode, npr.:
  ros2 run amsagv agv --ros-args -p heading_offset:=1234 -p debug:=true
'''
import math
import rclpy
from rclpy.executors import ExternalShutdownException
from amsagv.ams import Node, qos_cmd, qos_sensor
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from amsagv_msgs.msg import LineStamped
from amsagv.ams import pose_to_msg, get_frame_prefix, wrap_to_pi
from amsagv.agvapi import Agv, find_line_edges



#
# Privzete vrednosti kalibracijskih konstant (povozijo jih lahko ROS parametri)
#
TICKS_PER_M = 116845.0          # Impulzi enkoderja kolesa na 1 m poti (meritev 1 m, calibrate.py)
SIGN_LEFT = -1.0                # Predznak levega enkoderja (levi pri voznji naprej steje navzdol)
SIGN_RIGHT = 1.0                # Predznak desnega enkoderja
HEADING_TICKS_PER_REV = 16384.0 # Absolutni enkoder vozicka: 14 bit = 2^14 impulzov na obrat (PREVERI)
HEADING_OFFSET = 0.0            # Vrednost enc_heading pri gamma = 0 (vozicek poravnan z ohisjem) (IZMERI)
HEADING_SIGN = 1.0              # +1, ce gamma narasca pri zasuku vozicka v levo (CCW) (PREVERI)
D_AXLE = 0.1207                 # Medosna razdalja D [m] (tehnicna risba magv.pdf)
MAX_TICKS_PER_STEP = 5000       # Zascita pred nesmiselnimi skoki enkoderja v enem koraku
                                # (pri najvecji hitrosti 0,3 m/s je to ~700 impulzov na 20 ms)



def heading_to_gamma(enc_heading, offset, sign, ticks_per_rev):
    '''Pretvorba surove vrednosti absolutnega enkoderja v kot vozicka gamma [rad] na [-pi, pi).'''
    return wrap_to_pi(sign * (enc_heading - offset) * 2.0 * math.pi / ticks_per_rev)



def odometry_step(x, y, phi, gamma_prev, gamma, dd, d_axle):
    '''En korak odometrije tricikla.

    Argumenti:
      x, y, phi   -- trenutna poza sredine zadnje osi (v okvirju odom)
      gamma_prev  -- kot vozicka v prejsnjem koraku [rad]
      gamma       -- kot vozicka v tem koraku [rad]
      dd          -- pot, ki jo je v tem koraku prevozil vozicek [m]
      d_axle      -- medosna razdalja D [m]

    Vrne novo pozo (x, y, phi).
    '''
    # Srednji kot vozicka v koraku (gamma se med korakom spreminja);
    # razliko ovijemo, da prehod cez +-pi ne pokvari povprecja.
    gamma_mid = gamma_prev + wrap_to_pi(gamma - gamma_prev) / 2.0

    # Projekcija poti vozicka:
    #  - komponenta vzdolz ohisja premakne zadnjo os,
    #  - precna komponenta zasuka ohisje okoli sredine zadnje osi.
    ds = dd * math.cos(gamma_mid)              # pot sredine zadnje osi
    dphi = dd * math.sin(gamma_mid) / d_axle   # sprememba orientacije ohisja

    # Integracija s srednjo orientacijo (2. red, bolj natancno kot Euler)
    x += ds * math.cos(phi + dphi / 2.0)
    y += ds * math.sin(phi + dphi / 2.0)
    phi = wrap_to_pi(phi + dphi)
    return x, y, phi



def main():
    with Agv() as robot:
        # Handle velocity commands
        def handle_cmd_vel(msg):
            robot.set_vel(msg.linear.x, msg.angular.z)



        # Main loop, executed at 50 Hz
        def handle_timer():
            nonlocal x, y, phi, gamma, fd, enc_prev, step
            t = node.get_clock().now().to_msg()

            # Read sensors
            robot.read_sensors()

            #
            # Odometry
            #

            # Encoders
            enc_left, enc_right, enc_heading = robot.get_encoders()

            # 1) Kot vozicka iz absolutnega enkoderja (ne integriramo ga, zato ne drsi)
            gamma_new = heading_to_gamma(enc_heading, p_heading_offset, p_heading_sign, p_heading_ticks)

            dd = 0.0  # Pot vozicka v tem koraku [m]
            if enc_prev is None:
                # Prvi korak: le shranimo zacetne vrednosti enkoderjev (stevca nista nicelna)
                enc_prev = (enc_left, enc_right)
            else:
                # 2) Razlike impulzov od prejsnjega koraka
                dn_left = enc_left - enc_prev[0]
                dn_right = enc_right - enc_prev[1]
                enc_prev = (enc_left, enc_right)

                if abs(dn_left) > MAX_TICKS_PER_STEP or abs(dn_right) > MAX_TICKS_PER_STEP:
                    # Nesmiseln skok (npr. napaka komunikacije) -> korak izpustimo
                    node.get_logger().warn(f'Skok enkoderja zavrzen: {dn_left=}, {dn_right=}')
                else:
                    # 3) Pretvorba v pot posameznega kolesa (s predznakom: naprej = pozitivno)
                    ds_left = p_sign_left * dn_left / p_ticks_per_m
                    ds_right = p_sign_right * dn_right / p_ticks_per_m
                    # Pot vozicka = povprecje poti obeh koles
                    dd = (ds_left + ds_right) / 2.0

                    # 4) Posodobitev poze ohisja (model tricikla)
                    x, y, phi = odometry_step(x, y, phi, gamma, gamma_new, dd, p_d_axle)

                    # 5) Skupna prevozena pot vozicka (za sledenje poti po akcijah)
                    fd += dd

            gamma = gamma_new

            # Odometry message
            msg_odom.header.stamp = t
            msg_odom.pose.pose = pose_to_msg(x, y, phi)
            msg_odom.pose.pose.position.z = gamma  # Kot vozicka (dogovor pri vajah)
            # Pot vozicka v tem koraku [m] (dogovor pri vajah: localisation jo bere kot d)
            msg_odom.twist.twist.linear.x = dd
            # Publish odometry message
            pub_odom.publish(msg_odom)

            # Izpis za kalibracijo (vsakih 0,5 s), vklop s parametrom debug:=true
            step += 1
            if p_debug and step % 25 == 0:
                print(f'enc L={enc_left} R={enc_right} H={enc_heading} | '
                      f'gamma={math.degrees(gamma):7.2f} deg | '
                      f'x={x:.3f} y={y:.3f} phi={math.degrees(phi):7.2f} deg | fd={fd:.3f} m')

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
            msg_line.line.heading = gamma  # Kot vozicka (bere ga front.py za prikaz v RViz)
            msg_line.line.distance = fd    # Skupna prevozena pot vozicka
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

            # Kalibracijski parametri odometrije (privzete vrednosti so zgoraj)
            p_ticks_per_m = node.declare_parameter('ticks_per_m', TICKS_PER_M).value
            p_sign_left = node.declare_parameter('sign_left', SIGN_LEFT).value
            p_sign_right = node.declare_parameter('sign_right', SIGN_RIGHT).value
            p_heading_ticks = node.declare_parameter('heading_ticks_per_rev', HEADING_TICKS_PER_REV).value
            p_heading_offset = node.declare_parameter('heading_offset', HEADING_OFFSET).value
            p_heading_sign = node.declare_parameter('heading_sign', HEADING_SIGN).value
            p_d_axle = node.declare_parameter('d_axle', D_AXLE).value
            p_debug = node.declare_parameter('debug', False).value

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
            enc_prev = None # Encoder values in the previous step (left, right)
            step = 0 # Loop counter (for debug output)

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
