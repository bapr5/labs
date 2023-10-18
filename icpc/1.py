def rounds(A, B):    
    allr = A + B
    a = allr // 2
    b = allr // 2
    draws = allr % 2
    
    return a, b, draws

rounds = rounds(int(input()), int(input()))
print(rounds[0])
print(rounds[1])
print(rounds[2])
