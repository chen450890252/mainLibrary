#include <stdio.h>
#include <math.h>

/*
 *题目：判断101-200之间有多少个素数，并输出所有素数。
 */

int main()
{
    int i;
    printf("以下是１０１～２００之间所有的素数\n");
    for(i = 101; i < 201; i++)
    {
        int is = 1;
        for(int j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
            {
                is = 0;
                break;
            }
        }
        if(is == 1)
            printf("%d\n",i);
    }
    return 0;
}
