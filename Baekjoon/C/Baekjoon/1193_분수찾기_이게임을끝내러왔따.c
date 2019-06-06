#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int X, i, j, first_item;

    /* input */
    scanf("%d", &X);

    /* process */
    i = (int) ceil(0.5 * (-1 + sqrt(1 + X*8))); // floor가 아니라 ceil임^^..
    if(i%2==0) 
        first_item = 0.5 * (i + i*i);
    else
        first_item = 0.5 * ((i-1) + (i-1)*(i-1))+1;
    j = abs(X - first_item);
    // ------------------------------------------- printf("i : %d\nj : %d\n\n", i, j);
   
    /* output */
    printf("%d/%d\n", i-j, j+1);
    return 0;
}

// 아오 계속 순서 헷갈려서 삽질잼... 지그재그야 지그재그.. 포문 뭐하러 돌렸냐 진짜 이성 상실