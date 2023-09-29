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

def dfs(graph, query, entry_node='1'):
    stack = [entry_node]
    visited = []

    while stack:
        node = stack.pop()
        visited.append(node)
        print(f"Currently at node {node}")

        if node == query:
            print("FOUND")
            return

        neighbours = [neighbour for neighbour in graph[node] if neighbour not in visited]
        stack.extend(neighbours)

    print("Node not found")

e = input("Enter entry point to graph: ")
q = input("Enter graph node to find: ")

dfs(graph, q, e)