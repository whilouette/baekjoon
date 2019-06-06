#include <stdio.h>
#include <math.h>

int biggest(double a, double b, double c)
{
    double big_1, big_2;
    big_1 = a * b / c;
    big_2 = a / b * c;
    if(big_1>big_2)
        return (int) floor(big_1);
    else
        return (int) floor(big_2);
}

int main(void)
{
    double A, B, C;
    scanf("%le %le %le", &A, &B, &C);
    printf("%d\n", biggest(A, B, C));
}