# 16929_Two Dots

NM = list(map(int, input().split()))
N, M = NM[0], NM[1]
field = []
for i in range(N):
    field = field + [input()] # M 제한은 적용안함쓰 C나 JAVA에선 미리 해야하지만...

# 사이클 존재 여부 판단
