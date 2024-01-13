def lee_algorithm(matrix, start, end):
    n = len(matrix)
    distances = [[float("Inf")] * n for i in range(n)]
    distances[start[0]][start[1]] = 0
    queue = [start]
    while queue:
        x, y = queue.pop(0)
        for i, j in [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]:
            if i >= 0 and j >= 0 and i < n and j < n and matrix[i][j] != 1:
                if distances[i][j] > distances[x][y] + 1:
                    distances[i][j] = distances[x][y] + 1
                    queue.append((i, j))
    return distances[end[0]][end[1]]
matrix = [
    [0, 3, 0, 0],
    [0, 1, 1, 0],
    [0, 1, 0, 0],
    [0, 0, 0, 5]
]
start = (0, 0)
end = (3, 3)
print(lee_algorithm(matrix, start, end))