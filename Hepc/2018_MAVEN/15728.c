#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int N, K, i, j, temp1, temp2;
    int share[101] = {0, };
    int team[101] = {0, };
    scanf("%d %d", &N, &K);
    for(i=0; i<N; i++)
        scanf("%d", &share[i]);
    for(i=0; i<N; i++)
        scanf("%d", &team[i]);
    // 절댓값 순서로 정렬
    for(i=0; i<N-1; i++)
        for(j=0; j<N-1-i; j++)
        {
            if(abs(share[j]) < abs(share[j+1]))
            {
                temp1 = share[j];
                share[j] = share[j+1];
                share[j+1] = temp1;
            }
            if(abs(team[j]) < abs(team[j+1]))
            {
                temp2 = team[j];
                team[j] = team[j+1];
                team[j+1] = temp2;
            }
        }

    // ---------컴파일----------
    printf("\nshare : ");
    for(i=0; i<N; i++)
        printf("%d ", share[i]);
    printf("\nteam : ");
    for(i=0; i<N; i++)
        printf("%d ", team[i]);
    printf("\n");
    //-----------------------------

    // 제일 큰 양수끼리 곱, 제일 큰 음수끼리 곱
    int big1, big2, big3;
    big1=0;
    big2=0;
    big3=0;
    for(i=0; i<N; i++)
        for(j=0; j<N; j++)
        {
            if() // 부호가 같다면
                big1 = share[i] * team[j];
            // if()
            //     big1 = team[i] * share[j];
            // else if()
            //     big2 = team[i] * share[j];
            // else if()
            //     big3 = team[i] * share[j];
        }
    // 그 중 K번째의 결과가 답이다..
}