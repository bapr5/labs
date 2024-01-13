# class Graph:
# 	def __init__(self, vertices):
# 		self.V = vertices # No. of vertices
# 		self.graph = []
# 	def addEdge(self, u, v, w):
# 		self.graph.append([u, v, w])
# 	def printArr(self, dist):
# 		print("Vertex Distance from Source")
# 		for i in range(self.V):
# 			print("{0}\t\t{1}".format(i, dist[i]))
# 	def BellmanFord(self, src):
# 		dist = [float("Inf")] * self.V
# 		dist[src] = 0
# 		for _ in range(self.V - 1):
# 			for u, v, w in self.graph:
# 				if dist[u] != float("Inf") and dist[u] + w < dist[v]:
# 					dist[v] = dist[u] + w
# 		for u, v, w in self.graph:
# 			if dist[u] != float("Inf") and dist[u] + w < dist[v]:
# 				print("Graph contains negative weight cycle")
# 				return
# 		self.printArr(dist)
# if __name__ == '__main__':
# 	g = Graph(5)
# 	g.addEdge(0, 1, -1)
# 	g.addEdge(0, 2, 4)
# 	g.addEdge(1, 2, 3)
# 	g.addEdge(1, 3, 2)
# 	g.addEdge(1, 4, 2)
# 	g.addEdge(3, 2, 5)
# 	g.addEdge(3, 1, 1)
# 	g.addEdge(4, 3, -3)
# 	g.BellmanFord(0)
V = 5
def bellman_ford(graph, start):
	distances = [float("Inf")] * V
	distances[start] = 0
	for i in range(V - 1):
		for u, v, w in graph:
			if distances[u] != float("Inf") and distances[u] + w < distances[v]:
				distances[v] = distances[u] + w
	for u, v, w in graph:
		if distances[u] != float("Inf") and distances[u] + w < distances[v]:
			print("Граф содержит отрицательный цикл")
			return
	return distances
graph = [
	(0, 1, -1),
	(0, 2, 4),
	(1, 2, 3),
	(1, 3, 2),
	(1, 4, 2),
	(3, 2, 5),
	(3, 1, 1),
	(4, 3, -3)
]
start = 0
print(bellman_ford(graph, start))