#include <stdio.h>

/*
��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
�����������3��5��Ϊ����Ӧ���Ȱ�ǰ�����µļ�������Ȼ
���ټ���5�켴����ĵڼ��죬���� ����������������·�
����3ʱ�迼�Ƕ��һ�졣
*/

int isLongYear(int a);
int main()
{
    int year;
    int month;
    int day;
    int dayCount = 0;
    int monthDay[11] = {31,30,31,30,31,30,31,31,30,31,30};
    printf("��������ݣ�\n");
    scanf("%d",&year);
    printf("�������·�:\n");
    scanf("%d",&month);
    printf("�������գ�\n");
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
    printf("����һ��ĵ�%d��",dayCount);
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
