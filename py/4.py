from random import randint as ran
from random import choice as rchoice

mass = [ran(1, 100) for i in range(20)]

print("generated:", mass)


def quicksort(mass: int):
    if len(mass) <= 1:
        return mass
    else:
        mid = rchoice(mass)
        l = []
        m = []
        r = []
        for num in mass:
            if num < mid:
                l.append(num)
            elif num > mid:
                r.append(num)
            else:
                m.append(num)
        return quicksort(l) + m + quicksort(r)
print("Sorted: "+ str(quicksort(mass)))