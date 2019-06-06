# 백준 15739 삼각


#N = int(input())

def my(N):
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

    return (uptri + downtri)

def you(a):
    if a%2==0:
        b=a*(a+2)*(2*a+1)/8
        return b    
    else:
        c=(a+1)*(2*a*a+3*a-1)/8
        return c


def you_could(a):
    return a*(a+2)*(2*a+1)/8


#print('my', my(-3))
#print('you', you(-3))

for i in range(1,10001):
    if my(i) != you(i):
        print(i,'에서', my(i),'이어야하는데', you(i), '나와서 틀림')
    else:
        print(i, ' : ', my(i), '==', you(i))
