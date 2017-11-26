#include <stdio.h>
/*题目：打印出菱形*/
int main()
{
    for(int i = 0;i < 10;i++)
    {
        for(int k = 0;k < 10 - i;k++)
        {
            printf("  ");
        }
        for(int j = 0;j < 2*i+1;j++)
        {
            printf("★");
        }
        printf("\n");
    }
    for(int i = 0;i < 11;i++)
    {
        for(int k = 0;k < i;k++)
            printf("  ");
        for(int j = 0;j < (10-i)*2+1;j++)
            printf("★");
        printf("\n");
    }
    return 0;
}
