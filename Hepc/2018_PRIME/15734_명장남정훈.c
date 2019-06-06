#include <stdio.h>
#include <math.h>
int main(void)
{
    int L, R, A;
    scanf("%d %d %d", &L, &R, &A);

        if(L>R)
            if(L < R+A){
                int overA = (R+A) - L; 
                printf("%d\n", L*2 + (overA/2)*2);
            }
            else
                printf("%d\n", (R+A)*2);
        else if(L<R)
            if(R < L+A){
                int overA = (L+A) - R; 
                printf("%d\n", R*2 + (overA/2)*2);
            }
            else
                printf("%d\n", (L+A)*2);
        else if(L==R)
            printf("%d\n", L + R + (A/2)*2);
            
    return 0;
}