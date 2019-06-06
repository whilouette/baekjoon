#include <stdio.h>

char num[10001] = {'\0', };

int miboon(char poly[])
{
    int flag = 0;
    for(int i=0; poly[i]; i++)
    {
        if(poly[i] != 'x')
        {
            num[i] = poly[i];
            flag = 1;
        }
        else
            return flag;
    }
    return -1;
}

int main(void)
{
    char poly[20005] = {'\0',};
    scanf("%s", poly);

    int flag = miboon(poly);

    if(flag == 0)
        printf("1\n");
    else if(flag == -1)
        printf("0\n");
    else if(num[0]=='-' && !num[1])
        printf("-1\n");
    else
        printf("%s\n", num);
}