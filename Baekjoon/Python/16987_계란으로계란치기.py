# 16987 계란으로 계란 치기

N = int(input())
eggs = []
for i in range(N):
    egg = list(map(int, input().split()))
    eggs = eggs + [egg]

for i in range(N):
    pwr = eggs[i][1]
    target = 0
    for j in range(N):
        if j != i:
            # 제일 왼쪽 달걀부터 순서대로 깨본다고 생각하고
            # 깼을 경우 hp가 가장 낮은 달걀을 깸(실제 배열에서 수정).
            if eggs[j][0] == 0:
                continue
            elif eggs[target][0] > eggs[j][0] - pwr:
                target = j
            # 아 근데.... 남는 hp가 마이너스인 애가 있다면 걔네들끼리 비교하고
            # 생각하는 알고리즘을 짜야 함 이게 좀 복잡하겠구나 일단 내비두기
        else:
            continue