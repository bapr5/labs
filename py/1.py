#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Sep  7 21:51:34 2023

@author: pr5
"""

from random import randint as ran

mass = [ran(1, 100) for i in range(20)]
mass.sort()

print("generated:", mass)

query = int(input("Enter your query: "))


def binary_search(mass: list, query: int):
    left = 0
    right = len(mass) - 1
    while left <= right:
        mid = (left + right) // 2
        if mass[mid] == query:
            return mid
        elif mass[mid] < query:
            left = mid + 1
        else:
            right = mid - 1
    return -1


print("Result:", binary_search(mass, query))
