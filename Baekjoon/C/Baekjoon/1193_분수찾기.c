// 길을 이럿따~~~~

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int X, N, An, M, M_first, M_last, i, j, m;

    /* input */
    scanf("%d", &X);
    /* 연산 */
    N = (int) (0.5 * (-1 + sqrt(1 + X*8)));  //------- 여기가 ceil이기만 하면 됨
    printf("X : %d\nN : %d\n", X, N);

    if(N%2 == 0)
    {
        printf("// N이 짝수이다 \n");
        M_first = (int) (0.5 * (N+N*N)); // 이 부분이 상당히 
        M_last = M_first + (N-1); // 까다로운 부분이었구만
        M = M_last - M_first;
        printf("M : %d ~ %d\n\n", M_first, M_last);
        i = N;
        j = 1;
        // for(m = 0; m<M; m++){
        //     printf("i:%d, j:%d\n", i, j);
        //     i--;
        //     j++;
        // }
            printf("i:%d, j:%d\n\n", i, j);
    }
    else // 이 때는 잘 나옴.
    {
        printf("// N이 홀수이다 \n");
        M_last = (int) (0.5 * (N+N*N)); // 이 부분이 상당히
        M_first = M_last - (N-1); // 까다로운 부분이었구만
        M = M_last - M_first;
        printf("M : %d ~ %d\n\n", M_first, M_last);
        i = 1;
        j = N;
        for(m = 0; m<M; m++){
            printf("i:%d, j:%d\n", i, j);
            i++;
            j--;
        }
            printf("i:%d, j:%d\n\n", i, j);
    }

    /* output */
    printf("%d/%d\n", i, j);
    return 0;
}

