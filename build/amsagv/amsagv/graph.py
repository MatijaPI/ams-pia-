#!/usr/bin/python3
# -*- coding: utf-8 -*-
try:
    import matplotlib as mpl
    if __name__ == '__main__':
        mpl.use('Agg')
    import matplotlib.pyplot as plt
except:
    class FakePlt(object):
        def __init__(self):
            self.figure = None
    plt = FakePlt()
import numpy as np
from math import *
from amsagv import world
import os
import time
#import pickle
from amsagv.ams import wrap_to_pi



TEXT_OFFSET = 0.015



class Edge(object):
    def __init__(self, data=[], name=''):
        self.p = np.zeros((3, 0), dtype=float)
        self.length = 0.0
        self.name = name
        self.add(data)
    
    def add(self, data):
        for d in data:
            self.add_one(d)
  
    def add_one(self, data):
        special = False
        if data[0] == 'L':
            p = self._make_segment(data[1:])
        elif data[0] == 'A':
            p = self._make_arc(data[1:])
        elif data[0] == 'B':
            p = self._make_bezier(data[1:])
        elif data[0] == 'X':
            p = self._make_segment(data[1:])
            special = True
        else:
            p = None
    
        if p is not None:
            if special:
                p = np.vstack((p, np.zeros((1,p.shape[1]))))
            else:
                p = np.vstack((p, np.ones((1,p.shape[1]))))
            if self.p.shape[1] > 0:
                self.p = np.hstack((self.p, p[:,1:]))
            else:
                self.p = p
        
            self.length += Edge.get_length(p)

    def set_points(self, p, preserve=False):
        self.p = np.copy(p)
        if not preserve:
            self.p[2,:] = np.ones((1, self.p.shape[1]))
        self.length = Edge.get_length(self.p)
      
    @staticmethod
    def get_length(p):
        return np.sum(np.sqrt(np.sum(np.diff(p[0:2,:])**2, 0)))
  
    def draw(self, axes=plt, c='k', off=0.0, lw=3, alpha=1.0, direct=False, dirs=False):
        if np.any(self.p[2,:] < 0.5):
            d = np.abs(np.diff(self.p[2,:])) > 0.5
            x = list(np.where(d)[0])
            x.append(d.size)
            x.insert(0, 0)
            state = int(self.p[2,0])
            for i in range(len(x)-1):
                a = x[i]
                b = x[i+1]+1
                p = self.p[0:2,a:b]
                axes.plot(p[0,:]+off, p[1,:]+off, ls='-' if state == 1 else ':', c=c, lw=lw if state == 1 else 1, alpha=alpha, solid_capstyle='round')
                state = 0 if state else 1  
        else:
            if direct:
                #axes.plot(self.p[0,[0,-1]]+off, self.p[1,[0,-1]]+off, ls='-', c=c, lw=lw, alpha=alpha, solid_capstyle='round')
        
                axes.arrow(self.p[0,0], self.p[1,0], self.p[0,-1]-self.p[0,0], self.p[1,-1]-self.p[1,0], width=0.01, color=c, zorder=2, alpha=alpha, length_includes_head=True, head_width=0.04, head_length=0.06, overhang=0)
            else:
                axes.plot(self.p[0,:]+off, self.p[1,:]+off, ls='-', c=c, lw=lw, alpha=alpha, solid_capstyle='round')
        
                if dirs:
                    n = floor(self.p.shape[1]/2)
                    if n > 0:
                        d = 20*sqrt((self.p[0,n]-self.p[0,n-1])**2 + (self.p[1,n]-self.p[1,n-1])**2)
                        axes.arrow(self.p[0,n-1], self.p[1,n-1], (self.p[0,n]-self.p[0,n-1])/d, (self.p[1,n]-self.p[1,n-1])/d, width=0.01, color=(0.3, 0.3, 0.3), zorder=2, alpha=0.5, length_includes_head=True, head_width=0.02, head_length=0.03, overhang=0)
  
    def _make_arc(self, data):
        N = int(max(2, round(24*abs(data[4])/360.0)))
        t = np.linspace(data[3], data[3]+data[4], N)/180*pi
        x = data[0] + data[2]*np.cos(t)
        y = data[1] + data[2]*np.sin(t)
        return np.array([x, y])
    
    def _make_bezier(self, data):
        N = 12
        cp = np.array(data)
        cp = cp.reshape((-1,2)).T
        t = np.linspace(0, 1, N)
        t = np.vstack((t, t))
        p = np.zeros((2, N), dtype=float)
        for i, g in enumerate([1, 3, 3, 1]):
            p += g*(t**i)*((1-t)**(3-i))*cp[:,i:i+1]
        return p
    
    def _make_segment(self, data):
        p = np.array(data)
        p = p.reshape((-1,2)).T
        return p
    
    @staticmethod
    def segment_distance(p, q, r):
        '''Given the point $p$ and a segment defined by the end points $q$ and $r$,
           it calculates the distance $d$ to the nearest point $c$ on the segment.'''
        a = r - q
        b = p - q
        aa = a.T.dot(a)
        e = (a.T.dot(b))/aa
        if e < 0:
            c = q
            e = 0.0
        elif e > 1:
            c = r
            e = 1.0
        else:
            c = q + a*e
    
        f = sqrt(aa)
        v = p - c
        d = sqrt(v.T.dot(v))
        return (d, c, e, f)
    
    def point_to_distance(self, point):
        d_min=1.0
        s_opt = None
        s = 0.0
        for i in range(self.p.shape[1]-1):
            d, c, e, f = Edge.segment_distance(point, self.p[0:2,i], self.p[0:2,i+1])
            if d < d_min:
                d_min = d
                s_opt = s + e*f
            s += f
        return s_opt
  
    def get_part_norm(self, a=0.0, b=1.0):
        return self.get_part(a*self.length, b*self.length)
    
    def get_part(self, a=0.0, b=None):
        if b is None:
            b = self.length
        inside = False
        s = 0.0
        p = np.zeros((3,0), dtype=float)
        if b >= a:
            for i in range(self.p.shape[1]-1):
                e = self.p[0:2,i+1:i+2] - self.p[0:2,i:i+1]
                f = sqrt(sum(e**2))
                s += f
                if not inside and s >= a:
                    inside = True
                    d = a - s + f
                    r = self.p[:,i:i+1]
                    r = np.vstack((r[0:2,:] + d/f*e, r[2,:]))
                    p = np.hstack((p, r))
                if inside:
                    if s >= b:
                        # Last point
                        d = b - s + f
                        r = self.p[:,i:i+1]
                        r = np.vstack((r[0:2,:] + d/f*e, r[2,:]))
                        p = np.hstack((p, r))
                        break
                    else:
                        # Znotraj segmenta
                        p = np.hstack((p, self.p[:,i+1:i+2]))
            return p
    
    def simulate(self):
        D = 0.124
        S = 0.060

        tt = np.linspace(0, pi/2, 6)
        #ref = np.vstack((100 + 75*np.cos(tt), 200 + 75*np.sin(tt)))
        ref = self.p
    
        r = 0
        fi0 = atan2(np.diff(ref[1,0:2])[0], np.diff(ref[0,0:2])[0])
        fi0 = round(fi0/pi*2)*pi/2
        q0 = np.array([ref[0,0] - D*cos(fi0),
                       ref[1,0] - D*sin(fi0),
                       fi0,
                       fi0])
        q_f0 = np.array([q0[0] + D*cos(q0[2]), q0[1] + D*sin(q0[2])])
        q_s0 = np.array([q0[0] + S*cos(q0[2]), q0[1] + S*sin(q0[2])])
        q = q0
        q_f = q_f0
        q_s = q_s0
        Q = np.array([np.hstack((q, q_f, q_s))])

        while True:
            ex = ref[0,r] - q_f[0]
            ey = ref[1,r] - q_f[1]
            ed = sqrt(ex**2+ey**2)
            ea = atan2(ey, ex) - q[3]
            ea = wrap_to_pi(ea)
      
            if ed < 0.002:
                r = r + 1
                if r >= ref.shape[1]:
                    break
      
            Kd = 0.5
            Ka = 2
      
            v = Kd*ed
            if v > 0.005:
                v = 0.005
            v = v*cos(ea)
            w = v*sin(q[3]-q[2])/D + Ka*ea
      
            q[0] += v*cos(q[2])*cos(q[3] - q[2])
            q[1] += v*sin(q[2])*cos(q[3] - q[2])
            q[2] += v*sin(q[3] - q[2])/D
            q[3] += w
            q[2] = wrap_to_pi(q[2])
            q[3] = wrap_to_pi(q[3])
      
            q_f = np.array([q[0] + D*cos(q[2]), q[1] + D*sin(q[2])])
            q_s = np.array([q[0] + S*cos(q[2]), q[1] + S*sin(q[2])])
      
            d_q = np.hstack((q, q_f, q_s))
            Q = np.vstack((Q, d_q))
        return Q

    @staticmethod
    def create_edges(data=None):
        edges = {}
        if data is not None:
            for name, d in data.items():
                edge = Edge(data=d, name=name)
                edges[name] = edge
        return edges

    @staticmethod
    def draw_edges(edges, **kwargs):
        for edge in edges.values():
            edge.draw(**kwargs)

    @staticmethod
    def connect_nodes(edges, nodes):
        connections = {}
        for name, edge in edges.items():
            start = None
            end = None
            for n, node in nodes.items():
                if np.sum((edge.p[0:2,0]-node.p)**2) < 0.000004:
                    start = n
                if np.sum((edge.p[0:2,-1]-node.p)**2) < 0.000004:
                    end = n
                if start is not None and end is not None:
                    break
            connections[name] = (start, end)
        return connections

    @staticmethod
    def snap_to_edge(edges, point, filter=None):
        if filter is None:
            filter = edges.keys()
    
        d_min=1.0
        opt = None
        for name in filter:
            edge = edges[name]
            s = 0.0
            for i in range(edge.p.shape[1]-1):
                q = edge.p[0:2,i]
                r = edge.p[0:2,i+1]
                d, c, e, f = Edge.segment_distance(point, q, r)
                if d < d_min:
                    d_min = d
                    dd = r - q
                    phi = atan2(dd[1], dd[0])
                    opt = (name, s + e*f, (c[0], c[1], phi), d)
                s += f
        return opt



class Node(object):
    def __init__(self, p=(0.0, 0.0), name=''):
        self.p = p
        self.name = name

    def is_virtual(self):
        return self.name > 100

    def draw(self, axes=plt):
        axes.plot(self.p[0], self.p[1], 'ko', ms=10)
        axes.text(self.p[0]-TEXT_OFFSET, self.p[1]-TEXT_OFFSET, '{}'.format(self.name), ha='right', va='top', fontsize=20)

    @staticmethod
    def create_nodes(data=None):
        nodes = {}
        if data is not None:
            for name, p in data.items():
                nodes[name] = Node(p=p, name=name)
        return nodes

    @staticmethod
    def draw_nodes(nodes, **kwargs):
        for node in nodes.values():
            node.draw(**kwargs)

    @staticmethod
    def connect_edges(nodes, edges):
        connections = {}
        start = {}
        end = {}
        for n, node in nodes.items():
            start[n] = []
            end[n] = []
            for edge in edges.values():
                if np.sum((edge.p[0:2,0]-node.p)**2) < 0.000004:
                    start[n].append(edge.name)
                if np.sum((edge.p[0:2,-1]-node.p)**2) < 0.000004:
                    end[n].append(edge.name)
            connections[n] = (start[n], end[n])
        return connections



class Graph(object):
    def __init__(self): #, force=False
        #path = os.path.join(os.path.dirname(os.path.realpath(__file__)), 'world.pkl')
        #if not force and os.path.exists(path):
        #  with open(path) as f:
        #    d = pickle.load(f)
        #    
        #    self.edges = d.edges
        #    self.nodes = d.nodes
        #    self.tags = d.tags
        #    self.edge_nodes = d.edge_nodes
        #    self.node_edges = d.node_edges
        #    
        #    self.det_tags = d.det_tags
        #    self.det_edges = d.det_edges
        #    self.links = d.links
        #    self.tag_poses = d.tag_poses
        #    self.tag_map = d.tag_map
        #else:
        self.edges = Edge.create_edges(world.EDGES)
        self.nodes = Node.create_nodes(world.NODES)
        self.tags = Node.create_nodes(world.TAGS)
        self.edge_nodes = Edge.connect_nodes(self.edges, self.nodes)
        self.node_edges = Node.connect_edges(self.nodes, self.edges)
      
        self.compute()
      
        #  with open(path, 'w') as f:
        #    pickle.dump(self, f)
    
    def create_dot1(self, dot, positions=False):
        with open('{}.dot'.format(dot), 'w') as out:
            out.write('digraph space {\n')
            out.write('  graph [resolution=200, start=21, splines=polyline, esep=0.5, sep=0.2, overlap=scale];\n')
            out.write('  node [fontsize=10, penwidth=1, style=filled, fillcolor="#EEEEEE", shape=circle, width=0.35, height=0.35, fixedsize=true];\n')
            out.write('  edge [fontsize=10, penwidth=2, arrowsize=0.5];\n')
      
            out.write('\n  # Nodes\n')
            for n, p in self.nodes.items():
                out.write('  {}'.format(n))
                if positions:
                    out.write(' [pos="{},{}!"]'.format(p.p[0], p.p[1]))
                out.write(';\n')
      
            out.write('\n  # Connections\n')
            for n, c in self.edges.items():
                a = n.split('-')
                out.write('  {} -> {}'.format(*a))
                out.write(';\n')
        
            out.write('}')
        
    def create_dot2(self, dot, positions=False):
        with open('{}.dot'.format(dot), 'w') as out:
            out.write('digraph routes {\n')
            out.write('  graph [resolution=200, start=11, splines=polyline, esep=0.5, sep=0.2, overlap=scale];\n')
            out.write('  node [fontsize=10, penwidth=1, style=filled, fillcolor="#EEEEEE", shape=circle, width=0.35, height=0.35, fixedsize=true];\n')
            out.write('  edge [fontsize=10, penwidth=2, arrowsize=0.5];\n')
      
            out.write('\n  # Nodes\n')
            for tag_name, tag in self.tags.items():
                c = '"#FFFF0080"' if tag.is_virtual() else '"#00FFFF80"'
                out.write('  {}'.format(tag_name))
                if positions:
                    out.write(' [pos="{},{}!", fillcolor={}]'.format(tag.p[0], tag.p[1], c))
                else:
                    out.write(' [fillcolor={}]'.format(c))
                out.write(';\n')
      
            out.write('\n  # Connections\n')
            for k, vv in self.links.items():
                for v in vv:
                    a = v[2].split('-')
                    out.write('  {} -> {}'.format(*a))
          
                    if v[0] == 'X':
                        c = '"#00AA0080"'
                    elif v[0] == 'L':
                        c = '"#0000FF80"'
                    elif v[0] == 'R':
                        c = '"#FF000080"'
                    else:
                        c = 'black'
            
                    e = self.det_edges[v[2]]
          
                    out.write(' [label="{:.3f}", color={}]'.format(e.length, c))
                    out.write(';\n')
        
            out.write('}')

    def draw_axes(self):
        self.axes.set_xlabel('$x$ [m]')
        self.axes.set_ylabel('$y$ [m]')
        self.axes.set_aspect('equal')
        self.axes.set_xlim(world.BOX[0:3:2])
        self.axes.set_ylim(world.BOX[1:4:2])
        self.axes.set_facecolor((0.9, 0.1, 0.9))
        self.axes.set_axis_off()
        self.axes.set_position((0, 0, 1, 1))
    
    def compute(self):
        # Simulations (move to static Edge method)
        sim = {}
        for edge_name, edge in self.edges.items():
            sim[edge_name] = edge.simulate()
      
        self.det_tags = Node.create_nodes(world.TAGS)

        # Find detected tags and edge breaks
        edge_breaks = {}
        SIGMA_VIRTUAL = 0.005
        SIGMA_REAL = 0.020
        SIGMA_MAX = max(SIGMA_REAL, SIGMA_VIRTUAL)
        for tag_name, tag in self.tags.items():
            opt = (None, SIGMA_MAX**2, (0, 0))
            for edge_name, edge in self.edges.items():
                for i in range(sim[edge_name].shape[0]):
                    q_s = sim[edge_name][i,6:8]
                    q_f = sim[edge_name][i,4:6]
                    if tag.is_virtual():
                        d = np.sum((q_f - tag.p)**2)
                        tol = SIGMA_VIRTUAL**2
                    else:
                        d = np.sum((q_s - tag.p)**2)
                        tol = SIGMA_REAL**2
                    if d < tol and d < opt[1]:
                        opt = (edge.name, d, (q_f[0], q_f[1]))
      
            if opt[0] is not None:
                self.det_tags[tag_name].p = opt[2]
                edge = self.edges[opt[0]]
                d = edge.point_to_distance(opt[2])
                a = (tag_name, d)
                if opt[0] not in edge_breaks:
                    edge_breaks[opt[0]] = []
                edge_breaks[opt[0]].append(a)

        # Sort edge breaks
        for edge_break in edge_breaks.values():
            edge_break.sort(key=lambda x: x[1])

        # Find end parts
        parts_end = {}
        for k, line in edge_breaks.items():
            line.sort(key=lambda x: x[1])
            parts_end[k] = (line[-1][0], self.edges[k].length-line[-1][1])

        # Find start parts
        parts_start = {}
        for k, line in edge_breaks.items():
            line.sort(key=lambda x: x[1])
            parts_start[k] = (line[0][0], line[0][1])

        self.det_edges = Edge.create_edges()
    
        tag_edges = {}
        for k, line in edge_breaks.items():
            # Find edges between the tags on the same line
            if len(line)>1:
                for l in range(len(line)-1):
                    a = line[l][0]
                    b = line[l+1][0]
                    lab = line[l+1][1] - line[l][1]
                    tag_edges[a] = [(b, lab)]
          
                    edge = Edge()
                    edge.name = '{}-{}'.format(a, b)
                    edge.set_points(self.edges[k].get_part(line[l][1], line[l+1][1]))
                    self.det_edges[edge.name] = edge
            end = self.edge_nodes[k][1]
            start = []
            for t, n in self.edge_nodes.items():
                if n[0] == end:
                    start.append(t)
      
            a = parts_end[k]
            tag_edges[a[0]] = []
            for s in start:
                if s in parts_start:
                    b = parts_start[s]
                    tag_edges[a[0]].append((b[0], a[1] + b[1]))
          
                    pa = self.edges[k].get_part(self.edges[k].length-a[1])
                    pb = self.edges[s].get_part(0.0, b[1])
                    edge = Edge()
                    edge.name = '{}-{}'.format(a[0], b[0])
                    edge.set_points(np.hstack((pa, pb[:,1:])))
                    self.det_edges[edge.name] = edge
          
        # Clean duplicated points
        for n, e in self.det_edges.items():
            z = abs(np.sum((e.p[0:2,1:] - e.p[0:2,0:-1])**2, axis=0)) > 1e-6
            if not np.all(z):
                z = np.hstack((True, z))
                e.p = e.p[:,z]
          
        det_edge_nodes = Edge.connect_nodes(self.det_edges, self.det_tags)
        det_node_edges = Node.connect_edges(self.det_tags, self.det_edges)

        self.links = {}
        for tag_name in self.det_tags:
            self.links[tag_name] = []
        visited = []
        for n, c in det_node_edges.items():
            if len(c[0]) > 1:
                psi = [0,]*len(c[0])
                s = [0,]*len(c[0])
                for i, e in enumerate(c[0]):
                    s[i] = self.det_edges[e].p.shape[1]
                z = min(s)
                a = self.det_edges[c[0][0]].p[0:2,0:z]
                m = [0,]*(len(c[0])-1)
                for i in range(1, len(c[0])):
                    b = self.det_edges[c[0][i]].p[0:2,0:z]
                    g = np.sum((b - a)**2, 0)
                    m[i-1] = np.min(np.where(g > 0.000001))
                m = max(m)
                for i, e in enumerate(c[0]):
                    d = np.diff(self.det_edges[c[0][i]].p[0:2,[max([0,m-1]),m]])
                    psi[i] = atan2(d[1], d[0])
                for i in range(1, len(psi)):
                    psi[i] = wrap_to_pi(psi[i] - psi[0])
                psi[0] = 0.0
                o = sorted(range(len(psi)), key=lambda k: psi[k])
                oo = [None,]*len(o)
                for l, v in enumerate(reversed(o)):
                    oo[l] = c[0][v]

                ab = det_edge_nodes[oo[0]]
                self.links[ab[0]].append(('L', ab[1], oo[0]))
                for l in range(1,len(oo)-1):
                    ab = det_edge_nodes[oo[l]]
                    self.links[ab[0]].append(('X', ab[1], oo[l]))
                ab = det_edge_nodes[oo[-1]]
                self.links[ab[0]].append(('R', ab[1], oo[-1]))
        
                for v in c[0]:
                    if v not in visited:
                        visited.append(v)
        
            if len(c[1]) > 1:
                psi = [0,]*len(c[1])
                s = [0,]*len(c[1])
                for i, e in enumerate(c[1]):
                    s[i] = self.det_edges[e].p.shape[1]
                z = min(s)
                a = np.fliplr(self.det_edges[c[1][0]].p)[0:2,0:z]
                m = [0,]*(len(c[1])-1)
                for i in range(1, len(c[1])):
                    b = np.fliplr(self.det_edges[c[1][i]].p)[0:2,0:z]
                    g = np.sum((b - a)**2, 0)
                    m[i-1] = np.min(np.where(g > 0.000001))
                m = max(m)
                for i, e in enumerate(c[1]):
                    d = np.diff(np.fliplr(self.det_edges[c[1][i]].p)[0:2,[max([0,m-1]),m]])
                    psi[i] = atan2(d[1], d[0])
                for i in range(1, len(psi)):
                    psi[i] = wrap_to_pi(psi[i] - psi[0])
                psi[0] = 0.0
                o = sorted(range(len(psi)), key=lambda k: psi[k])
                oo = [None,]*len(o)
                for l, v in enumerate(o):
                    oo[l] = c[1][v]

                ab = det_edge_nodes[oo[0]]
                self.links[ab[0]].append(('L', ab[1], oo[0]))
                for l in range(1,len(oo)-1):
                    ab = det_edge_nodes[oo[l]]
                    self.links[ab[0]].append(('X', ab[1], oo[l]))
                ab = det_edge_nodes[oo[-1]]
                self.links[ab[0]].append(('R', ab[1], oo[-1]))
        
                for v in c[1]:
                    if v not in visited:
                        visited.append(v)
          
        rest = set(self.det_edges.keys()) - set(visited)
        for r in rest:
            ab = det_edge_nodes[r]
            self.links[ab[0]].append(('X', ab[1], r))

        self.compute_tag_poses()
        self.compute_tag_map()

    def compute_tag_poses(self):
        self.tag_poses = {}
        for tag_name, tag in self.tags.items():
            det_tag = self.det_tags[tag_name]
            if tag.is_virtual():
                self.tag_poses[tag_name] = (tag.p[0], tag.p[1])
            else:
                self.tag_poses[tag_name] = (tag.p[0], tag.p[1], atan2(det_tag.p[1]-tag.p[1], det_tag.p[0]-tag.p[0]))
      
    def compute_tag_map(self):
        self.tag_map = {}
        for k, link in self.links.items():
            self.tag_map[k] = [0, 0.0, 0, 0.0]
            for s in link:
                e = self.det_edges[s[2]]
                l = e.length
                if s[0] == 'L':
                    self.tag_map[k][0] = s[1]
                    self.tag_map[k][1] = l
                elif s[0] == 'R':
                    self.tag_map[k][2] = s[1]
                    self.tag_map[k][3] = l
                elif s[0] == 'X':
                    self.tag_map[k] += [s[1], l]

    def draw(self, include='', start=None, goal=None, path=[], nodes=False, tags=True, labels=True, direct=False, path_color=None):
        self.axes.cla()
        for p in world.SPACES:
            patch = mpl.patches.Polygon(p, color='w', fill=True)
            self.axes.add_patch(patch)
        Edge.draw_edges(self.edges, axes=self.axes, c='w', lw=55)
    
        if not path:
            self.draw_links(include=include, direct=direct)
        else:
            self.draw_path(path, c=path_color)
        Edge.draw_edges(self.edges, axes=self.axes, dirs=nodes)
        if nodes:
            Node.draw_nodes(self.nodes, axes=self.axes)
        if tags:
            self.draw_tags(det=True)
            if labels:
                self.draw_tag_labels()
        self.draw_point(goal, 'Goal', 'lawngreen', ha='left')
        self.draw_point(start, 'Start', 'salmon', ha='right')
        self.draw_axes()

    def find_closest_node(self, p, nodes):
        opt = (None, 1.0**2)
        for k, v in nodes.items():
            d = (v.p[0] - p[0])**2 + (v.p[1] - p[1])**2
            if d < opt[1]:
                opt = (k, d)
        if opt[0] is not None:
            return (opt[0], nodes[opt[0]].p)
        else:
            return None

    def create_figure(self, fig=plt.figure):
        self.fig = fig(figsize=[x/25.4/5*1000.0 for x in world.BOX[2:4]], facecolor=(0.9, 0.9, 0.9))
        self.axes = self.fig.add_subplot(111)

    def save_figure(self, name):
        self.fig.savefig(name, facecolor=self.fig.get_facecolor(), edgecolor='none', dpi=128)

    def draw_point(self, p, label='Goal', c='green', ha='left', va='top'):
        # The label is placed next to the point, on the side given by the alignment (e.g. ha='left',
        # va='top' places it right below the point)
        if p is not None and None not in p:
            self.axes.plot(p[0], p[1], 's', c=c)
            dx = TEXT_OFFSET if ha == 'left' else -TEXT_OFFSET
            dy = -TEXT_OFFSET if va == 'top' else TEXT_OFFSET
            ht = self.axes.text(p[0]+dx, p[1]+dy, label, ha=ha, va=va, fontsize=10)
            ht.set_bbox(dict(facecolor=c, alpha=1.0, edgecolor='k'))

    def get_path(self, tags):
        p = np.zeros((2,0), dtype=float)
        for i in range(1, len(tags)):
            a = tags[i-1]
            b = tags[i]
            e = None
            if a in self.links:
                vv = self.links[a]
                for v in vv:
                    if v[1] == b:
                        e = v
                        break
            if e is None:
                print('ERROR! Invalid path.') #TODO
                return None
            else:
                edge = self.det_edges[v[2]]
                p = np.hstack((p, edge.p[0:2,:]))
        return p

    def get_path_edges(self, tags):
        edges = []
        for i in range(1, len(tags)):
            a = tags[i-1]
            b = tags[i]
            e = None
            if a in self.links:
                vv = self.links[a]
                for v in vv:
                    if v[1] == b:
                        e = v
                        break
            if e is None:
                print('ERROR! Invalid path.') #TODO
                return None
            else:
                edges.append(v[2])
        return edges

    def snap_to_edge(self, point, filter=None):
        return Edge.snap_to_edge(self.det_edges, point, filter=filter)

    def draw_path(self, path, c=None):
        for i in range(1, len(path)):
            a = path[i-1]
            b = path[i]
            e = None
            if a in self.links:
                vv = self.links[a]
                for v in vv:
                    if v[1] == b:
                        e = v
                        break
            if e is None:
                print('ERROR! Invalid path.') #TODO
                return
            else:
                self.draw_link(v, c=c)

    def draw_link(self, v, direct=False, c=None):
        if c is None:
            if v[0] == 'X':
                c = 'g'
            elif v[0] == 'L':
                c = 'b'
            elif v[0] == 'R':
                c = 'r'
            else:
                c = 'k'
        edge =self.det_edges[v[2]]
        edge.draw(axes=self.axes, c=c, lw=10, alpha=0.3, direct=direct)

    def draw_links(self, include='LXR', direct=False):
        for k, vv in self.links.items():
            for v in vv:
                if v[0] in include:
                    self.draw_link(v, direct)

    def draw_tags(self, det=False):
        for tag_name, tag in self.tags.items():
            c = 'yellow' if tag.is_virtual() else 'cyan'
            if det:
                det_tag = self.det_tags[tag_name]
                self.axes.plot([tag.p[0], det_tag.p[0]], [tag.p[1], det_tag.p[1]], '-', c=c, lw=2, alpha=0.8)
                self.axes.plot(det_tag.p[0], det_tag.p[1], marker='x', c=c)
            self.axes.plot(tag.p[0], tag.p[1], 'o', c=c)

    def draw_tag_labels(self):
        for tag_name, tag in self.tags.items():
            c = 'yellow' if tag.is_virtual() else 'cyan'
            ht = self.axes.text(tag.p[0]+TEXT_OFFSET, tag.p[1]+TEXT_OFFSET, '{}'.format(tag_name), ha='left', va='bottom', fontsize=10)
            ht.set_bbox(dict(facecolor=c, alpha=0.5, edgecolor='k'))



if __name__ == '__main__':
    graph = Graph()

    point = (0.500, 0.075) # Point (x, y)
    opt = graph.snap_to_edge(point) # For a given point, find the closest point on the edges.
    # The format of the result is ('edge_name', distance_of_the_closest_point_on_the_edge_from_the_edge_start_point, (x, y, phi), distance_of_the_point_to_the_closest_point_on_the_edge)
    print('The point {} on the edge \'{}\' is the closest to the point {}; distance between the points is {} m. The point on the edge is {} m away from the edge start point.'.format(opt[2], opt[0], point, opt[3], opt[1]))

    path = [2, 11, 126, 131] # Path
    path_edges = graph.get_path_edges(path) # Get path edges
    path_points = graph.get_path(path) # Get path points
    print('The edges of the path that goes through the tags {} are {}.'.format(path, path_edges))
    opt = graph.snap_to_edge(point, filter=path_edges) # For a given point, find the closest point on the edges that comprise the path
    print('The point {} on the edge \'{}\' is the closest to the point {}; distance between the points is {} m. The point on the edge is {} m away from the edge start point.'.format(opt[2], opt[0], point, opt[3], opt[1]))
    for name in path_edges: # Print the length of each path edge
        print('Length of the edge \'{}\' is {} m.'.format(name, graph.det_edges[name].length))

    #plt.close('all')

    # Package source directory (this file is in <package>/amsagv/); run as `python3 -m amsagv.graph`
    pkg_path = os.path.dirname(os.path.dirname(os.path.realpath(__file__)))
    path = os.path.join(pkg_path, 'doc', 'img')
    if not os.path.exists(path):
        os.makedirs(path)

    graph.create_figure()
    graph.draw(nodes=True, tags=False)
    graph.save_figure(os.path.join(path, 'graph.png'))

    graph.create_figure()
    graph.draw()
    graph.save_figure(os.path.join(path, 'graph-tags.png'))

    graph.create_figure()
    graph.draw(include='LXR')
    graph.save_figure(os.path.join(path, 'graph-links.png'))

    graph.create_figure()
    graph.draw(path=[2, 11, 126, 131])
    graph.save_figure(os.path.join(path, 'graph-path.png'))

    with open(os.path.join(os.path.dirname(os.path.realpath(__file__)), 'graph_gen.py'), 'w') as f:
        f.write('#!/usr/bin/python3\n# -*- coding: utf-8 -*-\n\n')
        f.write('tag_map = {\n')
        for i in graph.tag_map:
            one = graph.tag_map[i]
            f.write('    {:3d}: ({}),\n'.format(i, ', '.join('{:3d}, {:5.3f}'.format(one[j], one[j+1]) for j in range(0, len(one), 2))))
        f.write('}\n')
        f.write('\n')
        f.write('tag_poses = {\n')
        for i, v in graph.tag_poses.items():
            f.write('    {:3d}: ({}),\n'.format(i, ','.join('{:6.3f}'.format(x) for x in v)))
        f.write('}\n')
        f.write('\n')
        f.write('tag_dets = {\n')
        for i, v in graph.det_tags.items():
            f.write('    {:3d}: ({}),\n'.format(i, ','.join('{:6.3f}'.format(x) for x in v.p)))
        f.write('}\n')

        f.write('''
def find_closest_node(p, nodes=tag_dets):
    opt = (None, 1.0**2)
    for k, v in nodes.items():
        d = (v[0] - p[0])**2 + (v[1] - p[1])**2
        if d < opt[1]:
            opt = (k, d)
    if opt[0] is not None:
        return (opt[0], nodes[opt[0]])
    else:
        return None
''')
