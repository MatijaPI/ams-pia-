#!/usr/bin/python3
# -*- coding: utf-8 -*-
"""Encoder calibration: ticks per metre (wheels) and ticks per radian (heading).

Usage: python3 calibrate.py [distance_m] [angle_deg]
Run 1: move the robot forward by distance_m (default 1 m), press Enter.
Run 2: rotate the robot in place by angle_deg (default 180), press Enter.
"""
import math
import sys
import time
from amsagv.agvapi import Agv

HEADING_BITS = 14
HEADING_RANGE = 1 << HEADING_BITS


def read(robot, n=20):
    """Average n encoder readings (heading is a signed 14-bit value)."""
    l = r = 0.0
    h_samples = []
    for _ in range(n):
        robot.read_sensors()
        el, er, eh = robot.get_encoders()
        l += el
        r += er
        h_samples.append(eh)
        time.sleep(0.02)
    return l / n, r / n, h_samples[-1]


def wrap_heading(d):
    """Wrap a heading difference into [-range/2, range/2)."""
    return (d + HEADING_RANGE // 2) % HEADING_RANGE - HEADING_RANGE // 2


def measure(robot, prompt):
    input(f'{prompt}\nPress Enter to record the START pose ...')
    start = read(robot)
    input('Move the robot, then press Enter to record the END pose ...')
    end = read(robot)
    return start, end


def main():
    dist = float(sys.argv[1]) if len(sys.argv) > 1 else 1.0
    ang = float(sys.argv[2]) if len(sys.argv) > 2 else 180.0

    with Agv() as robot:
        # --- Translation ---
        (l0, r0, h0), (l1, r1, h1) = measure(robot, f'Step 1: translate by {dist} m.')
        dl, dr = l1 - l0, r1 - r0
        tpm_l = dl / dist
        tpm_r = dr / dist
        print(f'\nTranslation: d_left={dl:.1f}, d_right={dr:.1f}')
        print(f'  ticks/m left  = {tpm_l:.2f}  (m/tick = {1 / tpm_l if tpm_l else float("nan"):.3e})')
        print(f'  ticks/m right = {tpm_r:.2f}  (m/tick = {1 / tpm_r if tpm_r else float("nan"):.3e})')
        print(f'  d_heading = {wrap_heading(h1 - h0)} ticks')

        # --- Rotation ---
        (l0, r0, h0), (l1, r1, h1) = measure(robot, f'\nStep 2: rotate in place by {ang} deg.')
        dl, dr = l1 - l0, r1 - r0
        dh = wrap_heading(h1 - h0)
        rad = math.radians(ang)
        print(f'\nRotation: d_left={dl:.1f}, d_right={dr:.1f}, d_heading={dh}')
        print(f'  wheel ticks/rad (left)  = {dl / rad:.2f}')
        print(f'  wheel ticks/rad (right) = {dr / rad:.2f}')
        print(f'  heading ticks/rad = {dh / rad:.3f}  ({dh / ang:.3f} ticks/deg)')
        print(f'  full circle of heading encoder = {HEADING_RANGE} ticks '
              f'-> expected {HEADING_RANGE / (2 * math.pi):.3f} ticks/rad')
        if tpm_l and tpm_r:
            # Wheel separation from rotation: arc per wheel = (b/2)*rad
            tpm = (abs(tpm_l) + abs(tpm_r)) / 2
            b = (abs(dl) + abs(dr)) / tpm / rad
            print(f'  estimated wheel separation b = {b:.4f} m')


if __name__ == '__main__':
    main()
