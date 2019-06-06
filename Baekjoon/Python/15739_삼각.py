# 백준 15739 삼각

N = int(input())


tri = [1]
for i in range(N-1):
    tri = tri + [tri[i] + 2]

#for row in tri:
#    for i in range(row):
#        print('*', end='')
#    print('')
