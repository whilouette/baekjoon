# 백준 15735 마방진 ( ismagic1 안해서 틀렸었음 )


# ------ IS MAGIC ? --------

def ismagic1(sq, n):
    temp = []
    for i in range(n):
        for j in range(n):
            if sq[i][j] in temp:
                return False
            elif sq[i][j] < 1 or sq[i][j] > n*n:
                return False
            temp = temp + [sq[i][j]]
    return True

def ismagic2(sq, n):
    total = n * (n**2 + 1) / 2
    
    for row in sq:
        if sum(row) != total:
            return False

    for i in range(n):
        colsum = 0
        for j in range(n):
            colsum = colsum + sq[j][i]
        if colsum != total:
            return False

    diagsum = 0
    for i in range(n):
        diagsum = diagsum + sq[i][i]
    if diagsum != total:
        return False

    diagsum = 0
    for i in range(n):
        diagsum = diagsum + sq[i][n-1-i]
    if diagsum != total:
        return False

    return True

# -------------------------


# preset
square = []
N = int(input())

# input
for i in range(N):
    temp = list(map(int, input().split()))
    square = square + [temp]

# output
if ismagic1(square, N) and ismagic2(square, N):
    print("TRUE")
else:
    print("FALSE")
