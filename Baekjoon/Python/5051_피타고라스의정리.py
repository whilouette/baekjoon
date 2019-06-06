# 5051 _ 피타고라스
n = int(input())
count = 0
for i in range(1,n):
    for j in range(i,n):
        target = (i**2 + j**2)%n
        for k in range(1,n):
            if((k**2)%n == target):
                count = count + 1
print(count)
