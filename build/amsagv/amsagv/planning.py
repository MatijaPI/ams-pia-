#!/usr/bin/python3
# -*- coding: utf-8 -*-
from amsagv.graph_gen import tag_map, tag_dets

class Planning(object):
    def __init__(self):
        pass

    def find_path(self, start_id, goal_id):
        '''Find the shortest path
    
        Inputs:
          start_id - Id of the start tag.
          goal_id  - Id of the goal tag.
            
        Outputs:
          path - A list of ordered tags that lead from the start tag to the goal tag
                 (including start and goal tag) or an empty list if path is not found.
        '''
        path = []
    
        #TODO Implement path planning algorithm here ...
    
        return path

    def generate_actions(self, path):
        '''Generate a list of actions for given path
    
        Inputs:
          path - A list of ordered tags that lead from the start tag to the goal tag
                 (including start and goal tag) or an empty list if path is not found.

        Outputs:
          actions - A list of actions the AGV need to execute in order to reach the goal tag
                    from the start tag or an empty list if no action is required/possible.
        '''
        actions = []

        #TODO Convert path to actions here ...
        #action = ('left', 20, 0.202)
        #actions.append(action)

        return actions



if __name__ == '__main__':
    planning = Planning()
    path = planning.find_path(2, 12)
    print(path)
    actions = planning.generate_actions(path)
    print(actions)
