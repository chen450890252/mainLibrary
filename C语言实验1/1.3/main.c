#include <stdio.h>
#include <math.h>
#include <windows.h>
/*
    题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
    程序分析：利用辗除法。*/

int main()
{
    int i,n,m;
    int flag = 0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i = min(m , n); i >= 2; i--)
    {
        if(m % i == 0 && n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        printf("最大公约数为%d\n",i);
    else if(flag == 0)
    {
        printf("没有最小公约数\n");
    }
    for(i = max(m , n);i <= m * n;i++)
    {
        if(i % n == 0 && i % m == 0)
        {
            flag = 2;
            break;
        }
    }
    if(flag == 2)
        printf("最小公倍数为%d",i);
    return 0;
}
