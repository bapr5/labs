from collections import defaultdict
def addEdge(graph, u, v):
    graph[u].append(v)
def topologicalSortUtil(node, visited, stack, graph):
    visited[node] = True
    for i in graph[node]:
        if not visited[i]:
            topologicalSortUtil(i, visited, stack, graph)
    stack.append(node)
def topologicalSort(graph):
    visited = {i: False for i in graph}
    stack = []
    for node in graph:
        if not visited[node]:
            topologicalSortUtil(node, visited, stack, graph)
    return stack[::-1]
graph = defaultdict(list)
addEdge(graph, 'A', 'C')
addEdge(graph, 'B', 'C')
addEdge(graph, 'B', 'D')
addEdge(graph, 'C', 'E')
addEdge(graph, 'D', 'E')
addEdge(graph, 'E', 'E')

print(topologicalSort(graph))