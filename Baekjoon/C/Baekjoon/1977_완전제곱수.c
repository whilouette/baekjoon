
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int M, N, total, smallest;
    double intptr;
    scanf("%d", &M);
    scanf("%d", &N);
    total = 0;
    smallest = 10001;

    // 하나하나 sqrt 시키면 분명히 시간초과 뜨겠지..? 엥 안 뜨는듯?
    for(; M<=N; M++)
    {   
        // 10 곱하고 자릿수로 나눠서 판별하는 법은 안됨. 5.099020 같은 애를 완전제곱수라고 할 듯
        // 비교해야해......
        if(modf(sqrt(M), &intptr) == 0)
        {
            // printf("%d 은 완전제곱수\n");
            total += M;
            if(smallest > M)
                smallest = M;
        }
    }
    
    if(smallest == 10001)
        printf("%d\n", -1);
    else
        printf("%d\n%d\n", total, smallest);

    return 0;
}

