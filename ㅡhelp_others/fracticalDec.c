# include <stdio.h>
# include <stdlib.h>

int getnum();
int isdec(int);


int main(void)
{
    int num = getnum();

    if (isdec(num) == 1)
        printf("\nIt is a prime number !\n");
    else
        printf("\nIt is a composite number !\n");

   return 0;
}


int getnum()
{
    int num;

    do{
        printf("Input an positive integer: ");
        scanf("%d", &num);

        if (num == 0)
        {
            printf("\nEnd of Program\n");
            exit(0);
        }

        else if (num < 2)
        {
            printf("%d\n", num);
            printf("It is a invalid integer !\n\n");
        }
    } while (num<2);

    return num;
}


int isdec(int num)
{
    printf("%d = ", num);

    int total = 0, count = 0;
    for (int i=2; i<=num; i++)
    {
        // 갈 때까지 나눠보기
        while (num % i == 0) {
            count++;
            num /= i;
        }
        
        // 나뉜 횟수 따져보기
        if(count == 0) // ------------ pass : 0
            continue;
        else if(count == 1) // ------- case1 : 1
        {
            // * 프린트
            if(total > 0)
                printf("*"); 
            // 소인수 프린트
            printf("%d", i);
            total++;
        }
        else if(count > 1) // -------- case2 : 2 이상
        {
            // * 프린트
            if(total > 0)
                printf(" * ");
            // 소인수 프린트
            printf("%d^%d", i, count);
            total += count;
        }

        // 변수 세팅
        count = 0;
    }

    return total;
}