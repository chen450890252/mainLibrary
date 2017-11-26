#include <stdio.h>

/*
题目：输出9*9口诀。
程序分析：分行与列考虑，共9行9列，i控制行，j控制列。
*/

int main()
{
    int i,j;
    for(i = 0;i < 9;i++)
    {
        for(j = 0;j < i+1;j++)
        {
            printf("%d³Ë%dµÃ%d   ",i+1,j+1,(i+1)*(j+1));
        }
        printf("\n");
    }
    return 0;
}
