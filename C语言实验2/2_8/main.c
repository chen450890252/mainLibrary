#include <stdio.h>

/*
��1+2!+3!+...+20!�ĺ͡�
*/

int jc(int n)   //����ÿһ��׳�
{
    int i = 1,result=1;
    for (i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
int jcsum(int n)//�׳˺�
{
    if (n== 1)
    {
        return 1;
    }
    else
    {
        return jc(n) + jcsum(n - 1);
    }
}
int main()
{
    int sum = 0;
    int temp = 1;
    for(int i = 1;i <= 20;i++)
    {
        for(int j = 1;j <= i;j++)
        {
            temp = temp * j;
        }
        sum = sum + temp;
        temp = 1;
    }
    printf("ѭ���������%d\n",sum);
    sum = jcsum(20);
    printf("�ݹ��������%d\n",sum);
    return 0;
}
