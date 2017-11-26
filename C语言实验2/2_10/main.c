#include <stdio.h>

/*递归完成猴子吃桃问题*/

int func(int n)
{
    if (n >= 10)
    {
        return 1;
    }
    else
    {
        return (func(n + 1) + 1) * 2;
    }
}

int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("第 %d 天桃子数：%d \n", i, func(i));
    }
    return 0;
}

