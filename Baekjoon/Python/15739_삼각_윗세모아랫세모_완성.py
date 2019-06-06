# 백준 15739 삼각


N = int(input())
M = N//2

# --- UP & DOWN COUNT ------
uptri, downtri = 0, 0
if N%2 == 0:
    for i in range(1, N+1):
        uptri = uptri + (i * (N+1-i))
    for i in range(1, M+1):
        downtri = downtri + i * (1 + 2*(2*(M-i)))
else:
    uptri = N
    for i in range(1, N):
        uptri = uptri + (i * (N+1-i))
    for i in range(1, M+1):
        downtri = downtri + i * (1 + 2*(2*(M-i)+1))
# -------------------------------


print(uptri+downtri)
