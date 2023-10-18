l,r = input().split(" ")
l,r = int(l),int(r)

def delfinder(l, r):
    maxdel=0
    maxpair=(0,0)
    for x in range(l,r):
        for y in range(x+1,r+1):
            dell = eucld(x,y)
            if dell > maxdel:
                maxdel = dell
                maxpair = (x,y)
    return maxpair
def eucld(a, b):
    while b != 0:
        a, b = b, a % b
    return a
a,b = (delfinder(l, r))
print(a,b)

