#include <stdio.h>

/*�ݹ���ɺ��ӳ�������*/

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
        printf("�� %d ����������%d \n", i, func(i));
    }
    return 0;
}

