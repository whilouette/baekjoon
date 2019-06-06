#include <stdio.h>
int is_group(char word[])
{
    int i, j, flag;
    for(i=0; word[i]; i++) // word[j]를 기준으로
    {
    for(j=i+1, flag=0; word[j]; j++) // 그 뒤의 문자들과 비교. 초기값 0
        if(word[i]!=word[j]) // 다르면 1
            flag = 1;
        else if(flag) // 같은데 달랐었으면(1)
            return 0; // 나가
    }
    return 1;
}

int main(void)
{
    int N, i, j, k, count;
    char word[100] = {'\0', };

    scanf("%d", &N);

    for(i=0, count=0; i<N; i++)
    {
        // word 초기화, 입력
        for(j=0; word[j]; j++)
            word[j] = '\0';
        scanf("%s", word);

        // isgroup?
        if(is_group(word))
            count++;
    }
    printf("%d\n", count);
}


// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     int N, i, j, k, count, is_group;
//     char word[100] = {'\0', };
//     char exist[100] = {'\0', };

//     scanf("%d", &N);

//     for(i=0, count=0; i<N; i++)
//     {
//         for(j=0; word[j]; j++)
//             word[j] = '\0';
//         scanf("%s", word);

//         for(j=0; word[j]; j++)
//         {
//             // printf("%c : ", word[j]);
//             for(k=j+1, is_group=-1; word[k]; k++)
//             {
//                 if(word[j]!=word[k]){
//                     // printf("%c%d ", word[k], is_group);
//                     is_group = 1;
//                 }
//                 else if(is_group == 1)
//                     {
//                         // printf("%c%d ", word[k], is_group);
//                         is_group = 0;
//                         break;
//                     }
//                 // else
//                 // {
//                 //     printf("%c%d ", word[k], is_group);
//                 // }
                
//             }
//             if(is_group == 0){
//                 // printf("그룹 단어 아님\n");
//                 break;
//             }
//             // else
//             // {
//             //     printf("\n");
//             // }
            
//         }
//         // printf("%d\n", is_group);
//         if(is_group)
//             count++;
//     }

//     printf("%d\n", count);
    
//     return 0;
// }