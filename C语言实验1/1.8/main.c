#include <stdio.h>

/*
题目：输入年份判断是否为闰年。
*/

int main()
{
    int year = -1;
    int flag = 0;
    printf("输入一个年份，告诉你是不是闰年:\n");
    scanf("%d",&year);
    if(year % 1000 == 0)
        flag = 0;
    else
    {
        if(year % 4 == 0)
            flag = 1;
        else
            flag = 0;
    }
    switch(flag)
    {
    case 0:
        printf("%d年不是闰年\n",year);
        break;
    case 1:
        printf("%d是闰年\n",year);
        break;
    }
    return 0;
}
