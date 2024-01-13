
def union(parent, rank, i, j):
    irep = find(parent, i)
    jrep = find(parent, j)
    parent[irep] = jrep
