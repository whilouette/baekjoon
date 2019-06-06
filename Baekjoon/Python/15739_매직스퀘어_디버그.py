# 백준 15735 마방진


# ------ process -------- 
def ismagic(sq, n):
    total = n * (n**2 + 1) / 2
    #print("--- should be",total)
    
    for row in sq:
        if sum(row) != total:
            #print(sq, "--- row is ", sum(row))
            return False

    for i in range(n):
        colsum = 0
        for j in range(n):
            colsum = colsum + sq[j][i]
        if colsum != total:
            #print(i, "--- colsum is ", colsum)
            return False

    diagsum = 0
    for i in range(n):
        diagsum = diagsum + sq[i][i]
    if diagsum != total:
        #print("left --- diagsum is ", diagsum)
        return False

    diagsum = 0
    for i in range(n):
        diagsum = diagsum + sq[i][n-1-i]
    if diagsum != total:
        #print("right --- diagsum is ", diagsum)
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
if ismagic(square, N):
    print("TRUE")
else:
    print("FALSE")
