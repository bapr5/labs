"""
import heapq,random
def heap_sort(arr):
    heapq.heapify(arr)
    print("heaped:",arr)
    result = []
    while arr:
        result.append(heapq.heappop(arr))
        print("state:", result)   
    return result
arr = [random.randint(0,10) for x in range(10)]
print("got:", arr)
print("sorted:", heap_sort(arr))
"""
import heapq,random
def heap_sort(arr):
    arr.sort()
    print("heaped:",arr)
    result = []
    while arr:
        result.append(arr.pop(0))
        print("state:", result)   
    return result
arr = [random.randint(0,10) for x in range(10)]
print("got:", arr)
print("sorted:", heap_sort(arr))