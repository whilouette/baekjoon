def display(apt):
    for floor in range(len(apt)-1, -1, -1):
        print(apt[floor])
    print()

# 입력 받기
T = int(input())
for i in range(T):
    k = int(input())
    n = int(input())pyto

    # 0층 세팅 (0층의 i호에는 i명이 산다)
    ab = [[0]]
    for b in range(1, n+1):
        ab[0] += [b]
    display(ab) # 확인용
    print("----------------\n")
 
    for a in range(1, k+1):
        ab += [[0]]
        for b in range(1, n+1):
            total = 0
            for j in range(1, b+1):
                total += ab[a-1][j]
            ab[a] += [total]    
        display(ab) # 확인용
    total = 0
    for num in ab[k-1]:
        total += num
        
    print(total)
