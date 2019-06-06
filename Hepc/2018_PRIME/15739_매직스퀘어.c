#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_magic(int sq[][101], int N, int sum){
    int i, j, row, col, cros_l, cros_r, last;
    // 행의 합, 열의 합, 대각선의 합
    for(cros_l=0, cros_r=0, i=0; i<N; i++)
    {
        printf("\n%d : \n", i);
        row = 0;
        col = 0;
        for(j=0; j<N; j++){
            printf("row : [%d][%d] - %d\n", i, j, sq[i][j]);
            printf("col : [%d][%d] - %d\n", j, i, sq[j][i]);
            row += sq[i][j];
            col += sq[j][i];
        }
        if(row != sum || col != sum)
            return 0;
        cros_l += sq[i][i];
        cros_r += sq[i][N-i-1];
        printf("\ncros_l : [%d][%d] - %d\n", i, i, sq[i][i]);
        printf("cros_r : [%d][%d] - %d\n", i, N-i-1, sq[i][N-i-1]);
    }
    if(cros_l != sum || cros_r != sum)
        return 0;
    return 1;
}

int main(void)
{
    int N, i, j, sum;
    scanf("%d", &N);
    int square[101][101] = {0, };
    int exist[10001] = {0, };
    sum = N * ((int)pow(N, 2) + 1)/2;

    for(i=0; i<N; i++)
        for(j=0; j<N; j++){
            scanf("%d", &square[i][j]);
            if(++exist[square[i][j]] > 1){
                printf("FALSE\n");
                return 0;
            }
        }
    if(is_magic(square, N, sum))
        printf("TRUE\n");
    else
        printf("FALSE\n");

    // 중복 경우

    // 행의 합
    // 열의 합

    // 대각선의 합

    return 0;
}