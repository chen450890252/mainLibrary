#include <stdio.h>

/*
题目：输入某年某月某日，判断这一天是这一年的第几天？
程序分析：以3月5日为例，应该先把前两个月的加起来，然
后再加上5天即本年的第几天，特殊 情况，闰年且输入月份
大于3时需考虑多加一天。
*/

int isLongYear(int a);
int main()
{
    int year;
    int month;
    int day;
    int dayCount = 0;
    int monthDay[11] = {31,30,31,30,31,30,31,31,30,31,30};
    printf("请输入年份：\n");
    scanf("%d",&year);
    printf("请输入月份:\n");
    scanf("%d",&month);
    printf("请输入日：\n");
    scanf("%d",&day);
    for(int i = 0;i < month - 1;i++)
    {
        dayCount = dayCount + monthDay[i];
    }
    dayCount = dayCount + day;
    if(isLongYear(year) == 1)
    {
        dayCount++;
    }
    printf("这是一年的第%d天",dayCount);
    return 0;
}

int isLongYear(int a)
{
    int flag;
    if(a % 1000 == 0)
        flag = 0;
    else
    {
        if(a % 4 == 0)
            flag = 1;
        else
            flag = 0;
    }
    return flag;
}
