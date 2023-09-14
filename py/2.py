#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Sep  7 22:56:34 2023

@author: pr5
"""

graph = {
'1':[]
    }

visited = []
queue = []


def bfs(visited:list, graph:dict, entry_node:str):  
    visited.append(entry_node)
    queue.append(entry_node)

    while queue:
        m = queue.pop(0)


        for neighbour in graph[m]:
            if neighbour not in visited:
                visited.append(neighbour)
                queue.append(neighbour)




bfs(visited, graph, )   
