#include <stdio.h>
#include <math.h>
#include <windows.h>
/*
    ��Ŀ����������������m��n���������Լ������С��������
    �������������շ������*/

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
        printf("���Լ��Ϊ%d\n",i);
    else if(flag == 0)
    {
        printf("û����С��Լ��\n");
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
        printf("��С������Ϊ%d",i);
    return 0;
}
