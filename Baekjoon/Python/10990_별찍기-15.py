# 10990 별찍기 -15

n = int(input())

for i in range(n):

    if i == 0:
        print(' '*(n-1), end='')
        print('*')
    else:
        blank_1 = n - (i+1)
        blank_2 = 2 * (i-1) + 1
        for j in range(blank_1):
            print(' ', end = '')
        print('*', end = '')
        for j in range(blank_2):    
            print(' ', end = '')
        print('*')
