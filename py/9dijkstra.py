import heapq


def dijkstra(graph, start):
    distances = {vertex: float('inf') for vertex in graph}
    distances[start] = 0
    heap = [(0, start)]

    while heap:
        (current_distance, current_vertex) = heapq.heappop(heap)

        if current_distance > distances[current_vertex]:
            continue

        for neighbor, weight in graph[current_vertex].items():
            distance = current_distance + weight

            if distance < distances[neighbor]:
                distances[neighbor] = distance
                heapq.heappush(heap, (distance, neighbor))

    return distances
graph = {
    'A': {'B': 1, 'C': 4},
    'B': {'D': 5},
    'C': {'D': 3},
    'D': {}
}
print(dijkstra(graph,'A'))