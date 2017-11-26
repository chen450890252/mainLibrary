#include <stdio.h>

/*
题目：要求输出国际象棋棋盘。
程序分析：用i控制行，j来控
制列，根据i+j的和的变化来控
制输出黑方格，还是白方格。
*/


int main()
{
    for(int i = 0;i < 8;i++)
    {
        if(i % 2 == 1)
        {
            for(int j = 0;j < 8;j++)
            {
                if(j % 2 == 1)
                {
                    printf("■");
                }
                if(j % 2 == 0)
                {
                    printf("□");
                }
            }
        }
        if(i % 2 == 0)
        {
            for(int j = 0;j < 8;j++)
            {
                if(j % 2 == 1)
                {
                    printf("□");
                }
                if(j % 2 == 0)
                {
                    printf("■");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
