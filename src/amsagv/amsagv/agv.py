#!/usr/bin/python3
# -*- coding: utf-8 -*-
'''Vozlisce AGV: branje senzorjev, odometrija in objava tem /odom ter /line.

Kinematicni model mAGV = TRICIKEL s prednjim diferencialnim vozickom:
  - prednji vozicek ima dve gnani kolesi z inkrementalnima enkoderjema
    -> iz njiju dobimo pot vozicka dd v vsakem koraku,
  - enkoder smeri (enc_heading) meri zasuk vozicka glede na ohisje -> gamma,
  - poza (x, y, phi) se nanasa na SREDINO ZADNJE OSI ohisja,
  - D je medosna razdalja (zadnja os <-> os vrtenja vozicka).

Enacbe (zvezno):             Diskretno (korak Ts = 0,02 s):
  v    = v_s * cos(gamma)      ds   = dd * cos(gamma_sr)
  phi' = v_s * sin(gamma)/D    dphi = dd * sin(gamma_sr) / D
  x'   = v * cos(phi)          x   += ds * cos(phi + dphi/2)
  y'   = v * sin(phi)          y   += ds * sin(phi + dphi/2)

gamma se racuna INKREMENTALNO (kot v delujoci kodi kolegov): ob zagonu je
gamma = 0, nato pristevamo spremembe enkoderja smeri. Zato mora biti
VOZICEK OB ZAGONU VOZLISCA PORAVNAN Z OHISJEM (gamma = 0). Tako ne
potrebujemo odmika (offseta) absolutnega enkoderja.

Kalibracijske konstante so ROS parametri (privzete vrednosti spodaj),
zato jih v laboratoriju lahko spreminjamo brez urejanja kode, npr.:
  ros2 run amsagv agv --ros-args -p debug:=true
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
# Kalibracijski faktorji (izmerjeni s calibrate.py, prevzeti iz delujoce kode kolegov).
# Predznak je ze vkljucen: pozitiven premik = robot naprej / vozicek levo (CCW).
#   K_LEFT    ~ -pi*0.04672/16500  (levi enkoder pri voznji naprej steje navzdol)
#   K_RIGHT   ~ +pi*0.04672/16500  (desni enkoder pri voznji naprej steje navzgor)
#   K_HEADING ~ -2*pi/8200         (enkoder smeri: ~8200 impulzov na obrat, narasca v desno)
#
K_LEFT = -8.960016e-06          # [m/impulz]   (~111 600 impulzov/m)
K_RIGHT = 8.831842e-06          # [m/impulz]   (~113 230 impulzov/m)
K_HEADING = -7.662421e-04       # [rad/impulz]
D_AXLE = 0.1207                 # Medosna razdalja D [m] (tehnicna risba magv.pdf)
DT = 1.0 / 50.0                 # Perioda glavne zanke [s]

# Zascita pred nesmiselnimi skoki enkoderjev v enem koraku (20 ms):
#  - kolesa: pri najvecji hitrosti 0,3 m/s je to ~700 impulzov,
#  - smer:   1000 impulzov ~ 44 deg v 20 ms, kar fizicno ni mogoce;
#            tak skok pomeni napako komunikacije ali preliv stevca.
MAX_WHEEL_TICKS_PER_STEP = 5000
MAX_HEADING_TICKS_PER_STEP = 1000



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

    # Integracija s srednjo orientacijo (midpoint / RK2, bolj natancno kot Euler)
    x += ds * math.cos(phi + dphi / 2.0)
    y += ds * math.sin(phi + dphi / 2.0)
    phi = wrap_to_pi(phi + dphi)
    return x, y, phi, ds, dphi



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

            if enc_prev is None:
                # Prvi cikel: le shranimo zacetne vrednosti enkoderjev.
                # (Stevci niso nicelni; brez tega bi prvi korak naredil ogromen skok.)
                enc_prev = (enc_left, enc_right, enc_heading)
                return

            # 1) Spremembe enkoderjev od prejsnjega koraka (surove, brez predznakov)
            dn_left = enc_left - enc_prev[0]
            dn_right = enc_right - enc_prev[1]
            dn_heading = enc_heading - enc_prev[2]
            enc_prev = (enc_left, enc_right, enc_heading)

            # Zascita pred skoki (korak izpustimo, izgubimo najvec 20 ms gibanja)
            if abs(dn_left) > MAX_WHEEL_TICKS_PER_STEP or abs(dn_right) > MAX_WHEEL_TICKS_PER_STEP:
                node.get_logger().warn(f'Skok enkoderja koles zavrzen: {dn_left=}, {dn_right=}')
                dn_left, dn_right = 0, 0
            if abs(dn_heading) > MAX_HEADING_TICKS_PER_STEP:
                node.get_logger().warn(f'Skok enkoderja smeri zavrzen: {dn_heading=}')
                dn_heading = 0

            # 2) Pretvorba v fizikalne kolicine (predznak je ze v K_*)
            ds_left = dn_left * p_k_left       # pot levega kolesa [m]
            ds_right = dn_right * p_k_right    # pot desnega kolesa [m]
            dd = 0.5 * (ds_left + ds_right)    # pot vozicka [m]

            # 3) Kot vozicka: inkrementalno (gamma = 0 ob zagonu)
            gamma_new = wrap_to_pi(gamma + dn_heading * p_k_heading)

            # 4) Posodobitev poze ohisja (model tricikla)
            x, y, phi, ds, dphi = odometry_step(x, y, phi, gamma, gamma_new, dd, p_d_axle)
            gamma = gamma_new

            # 5) Skupna prevozena pot vozicka (za sledenje poti po akcijah)
            fd += dd

            # Odometry message
            msg_odom.header.stamp = t
            msg_odom.pose.pose = pose_to_msg(x, y, phi)
            msg_odom.pose.pose.position.z = gamma  # Kot vozicka (dogovor pri vajah)
            # Hitrosti ohisja (standardni pomen Twist): v [m/s], omega [rad/s]
            msg_odom.twist.twist.linear.x = ds / DT
            msg_odom.twist.twist.angular.z = dphi / DT
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
            p_k_left = node.declare_parameter('k_left', K_LEFT).value
            p_k_right = node.declare_parameter('k_right', K_RIGHT).value
            p_k_heading = node.declare_parameter('k_heading', K_HEADING).value
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
            x, y, phi, gamma = 0.0, 0.0, 0.0, 0.0 # Robot configuration (vozicek mora biti poravnan!)
            fd = 0.0 # Travelled distance of the front cart
            enc_prev = None # Encoder values in the previous step (left, right, heading)
            step = 0 # Loop counter (for debug output)

            timer = node.create_timer(DT, handle_timer)

            rclpy.spin(node)
        except (KeyboardInterrupt, ExternalShutdownException):
            pass
        finally:
            node.destroy_node()
            if rclpy.ok():
                rclpy.shutdown()



if __name__ == '__main__':
    main()
