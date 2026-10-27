#!/usr/bin/python3
# -*- coding: utf-8 -*-
''' Interface for serial communication with the AGV driver

It contains a simple test program that sets constant motor velocities and outputs sensor readings.
'''
import serial
import struct
from time import sleep, time
from amsagv.ams import wrap_to_pi
from math import pi



class Agv(object):
    WHEEL_VEL_GAIN = 1000.0
    AXIS_LENGTH = 0.075 # Axis length, in m
    WHEEL_MAX_V = 0.3 # Max wheel velocity, in m/s
    REPEAT = 10 # Number of start/stop command repeats
    TIMEOUT = 0.02 # Start/stop command timeout

    def __init__(self, port='/dev/ttyS0', baud=115200):
        self._serial = serial.Serial()
        self._serial.baudrate = baud
        self._serial.port = port
        self._serial.timeout = 0
        self._buff = bytearray()

        self.data = [0]*28

    def __enter__(self):
        self.open()
        return self

    def __exit__(self, *args, **kwargs):
        self.close()

    def open(self):
        self._serial.open()
    
        m, s = False, False
        M, S = True, True
        i = Agv.REPEAT
        while m != M and s != S and i > 0:
            self.set_power_mode(motors=M, sensors=S)
            sleep(Agv.TIMEOUT)
            self.read_sensors()
            t, m, s = self.get_status()
            i -= 1
        if i==0:
            raise SystemError('Unable to setup the AGV controller.')

    def close(self):
        for i in range(Agv.REPEAT):
            self.set_wheel_vel() # Stop the robot
            sleep(Agv.TIMEOUT)
        for i in range(Agv.REPEAT):
            self.set_power_mode(motors=False, sensors=False) # Enable power-saving mode
            sleep(Agv.TIMEOUT)
    
        self._serial.close()

    #Set tangential and angular velocity, in m/s and rad/s, respectively
    def set_vel(self, v=0.0, omega=0.0):
        vl = -v+Agv.AXIS_LENGTH/2.0*omega
        vr = -v-Agv.AXIS_LENGTH/2.0*omega
        self.set_wheel_vel(vl, vr)

    # Set wheel velocities, in m/s
    def set_wheel_vel(self, left=0.0, right=0.0):
        cmd = [left, -right]
        chk = 0
        for i in range(len(cmd)):
            cmd[i] = Agv._clamp(cmd[i], -Agv.WHEEL_MAX_V, Agv.WHEEL_MAX_V)
            cmd[i] = int(cmd[i]*Agv.WHEEL_VEL_GAIN)
            cmd[i] = Agv._clamp_short(cmd[i])
            chk += (cmd[i]&0xFF) + (cmd[i]>>8)
        chk += 0x5A + 0x20 + 0x04
        msg = struct.pack('<BBBhhB', 0x5A, 0x20, 0x04, cmd[0], cmd[1], (-chk) & 0xFF)
        #print("TX: "+":".join("{:02X}".format(x) for x in msg)) # Debug
        self._serial.write(msg)

    def set_power_mode(self, motors=False, sensors=False):
        chk = 0
        a = int(motors)
        b = int(sensors)
        chk = 0x5A + 0x21 + 0x02 + a + b
        msg = struct.pack('<BBBBBB', 0x5A, 0x21, 0x02, a, b, (-chk) & 0xFF)
        #print("TX: "+":".join("{:02X}".format(x) for x in msg)) # Debug
        self._serial.write(msg)
        sleep(Agv.TIMEOUT)

    def set_watchdog(self, period):
        period = Agv._clamp_ushort(period)
        chk = 0x5A + 0x22 + 0x01 + (period>>8) + (period&0xFF)
        msg = struct.pack('<BBBBBB', 0x5A, 0x22, 0x01, period, (-chk) & 0xFF)
        #print("TX: "+":".join("{:02X}".format(x) for x in msg)) # Debug
        self._serial.write(msg)
        sleep(Agv.TIMEOUT)

    # Read sensors
    def read_sensors(self):
        msg = self._serial.read((3+40+1)*20)
        if len(msg):
            #print("RX: "+":".join("{:02X}".format(x) for x in msg)) # Debug
            self._buff += bytearray(msg)
            n = len(self._buff)
            i = 0
            while n-i >= 4:
                head, cmd, length = struct.unpack('<BBB', self._buff[i:i+3])
                if head == 0x5A:
                    if n-i >= length + 1 + 3:
                        chk = sum(self._buff[i:i+3+length+1])
                        if chk & 0xFF == 0:
                            if cmd == 0x10:
                                self.data = struct.unpack('<Iiii8B8B8B', self._buff[i+3:i+3+length])
                            i += 3 + length + 1
                            continue
                    else:
                        break
                i += 1
            self._buff = self._buff[i:]

    def get_encoders(self):
        return self.data[1], self.data[2], self.data[3]
    
    def get_line_values(self, mode=0):
        mode %= 3
        return self.data[4+8*mode:4+8*mode+7]
    
    def get_status(self):
        return self.data[0] & 0x00FFFFFF, (self.data[0] & 0x01000000) != 0, (self.data[0] & 0x02000000) != 0
    
    def print_sensors(self):
        print('\033c')
        print('Status: t={} ms, motors={}, sensors={}'.format(*self.get_status()))
        print('Encoders: left={}, right={}, aux={}'.format(*self.data[1:4]))
        print('Line sensor:')
        print('  Individual: {:02X}, {:02X}, {:02X}, {:02X}, {:02X}, {:02X}, {:02X}, {:02X}'.format(*self.data[4:4+8]))
        print('  All on:     {:02X}, {:02X}, {:02X}, {:02X}, {:02X}, {:02X}, {:02X}, {:02X}'.format(*self.data[12:12+8]))
        print('  All off:    {:02X}, {:02X}, {:02X}, {:02X}, {:02X}, {:02X}, {:02X}, {:02X}'.format(*self.data[20:20+8]))
    
        print('  Individual   All on       All off')
        print('  ----------   ----------   ----------')
        tmpl = '  {:10s}   {:10s}   {:10s}'
        for i in range(8):
            a = [int(x*10/255) for x in self.data[4+i:21+i:8]]
            print(tmpl.format(*['o'*x for x in a]))

    @staticmethod
    def _clamp(num, low, high):
        return max(min(high, num), low)
    @staticmethod
    def _clamp_short(num):
        return Agv._clamp(num, -32768, 32767)
    @staticmethod
    def _clamp_ushort(num):
        return Agv._clamp(num, 0, 65536)



def find_line_edges(line_values):
    smin = min(line_values)
    smax = max(line_values)
    av = sum(line_values) / 7    
    threshold = (smin + smax) / 2

    edge_right = None
    edge_left = None
  
    if smax - smin > 80:
        line_el = [i for i in range(len(line_values)) if line_values[i] > threshold]

        # Right edge
        if line_el[0] == 0:
            edge_right = -1
        else:
            vs = line_values[line_el[0]-1:line_el[0]+1]
            if abs(vs[1] - vs[0]) > 0:
                edge_right = ((line_el[0] + float((threshold - vs[0])) / (vs[1] - vs[0])) - 4) / 2.5
            else:
                edge_right = (line_el[0] + 0.5 - 4) / 2.5
            
        # Left edge
        if line_el[-1] == 6:
            edge_left = 1
        else:
            vs = line_values[line_el[-1]:line_el[-1]+2]
            if abs(vs[1] - vs[0]) > 0:
                edge_left = ((line_el[-1] + float((threshold - vs[1])) / (vs[1] - vs[0])) - 2.5) / 2.5
            else:
                edge_left = (line_el[-1] - 2.5) / 2.5
    elif smax > 150:
        # On the line
        edge_right = -1.0
        edge_left = 1.0
      
    return edge_left, edge_right



if __name__ == '__main__':
    with Agv() as robot:
        try:
            k = 0
            while True:
                robot.read_sensors()
                line_values = robot.get_line_values()
                edge_left, edge_right = find_line_edges(line_values)
                k += 1
                if k % 20 == 0:
                    robot.print_sensors()
                    print('Line edges: left={}, right={}'.format(edge_left, edge_right))
                robot.set_vel(0.0, 1.0)
                sleep(0.01)
        except KeyboardInterrupt:
            pass
