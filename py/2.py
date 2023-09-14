#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Sep  7 22:56:34 2023

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


def bfs(visited: list, graph: dict, query: str, entry_node='1'):
    visited.append(entry_node)
    queue.append(entry_node)

    while queue:
        m = queue.pop(0)
        print(f"Currently in node {m}")
        if(m==query):
            print("FOUND")
            break
        for neighbour_node in graph[m]:
            if neighbour_node not in visited:
                visited.append(neighbour_node)
                queue.append(neighbour_node)


e = input("Enter entry point to graph: ")
q = input("Enter graph node to find: ")
try:
    bfs(visited, graph, q, e)
except err as e:
    print("no such point on graph or invalid query")
