#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Sep 14 16:39:12 2023

@author: pr5
"""

graph = {
    '1': ["2", "3"],
    '2': ["4", "5", "1"],
    '3': ["6", "1"],
    '4': ["7", "2"],
    '5': ["8", "6"],
    '6': ["5", "3", "9"],
    '7': ["4"],
    '8': ["5"],
    '9': ["6"]

}

visited = []
queue = []


def dfs(visited: list, graph: dict, query: str, entry_node='1'):
    visited.append(entry_node)
    queue.append(entry_node)

    while queue:
        m = queue.pop(0)
        visited.append(m)
        print(f"Currently at node {m}")
        if (m == query):
            print("FOUND")
            break
        neighbours = [neighbour for neighbour in graph[m]
                      if (neighbour not in visited)]
        if neighbours != []:
            queue.append(neighbours[0])
        else:
            queue.append(visited[-1])
            
        


e = input("Enter entry point to graph: ")
q = input("Enter graph node to find: ")
try:
    dfs(visited, graph, q, e)
except:
    print("no such point on graph or invalid query")
