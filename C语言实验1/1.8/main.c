#include <stdio.h>

/*
��Ŀ����������ж��Ƿ�Ϊ���ꡣ
*/

int main()
{
    int year = -1;
    int flag = 0;
    printf("����һ����ݣ��������ǲ�������:\n");
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
        printf("%d�겻������\n",year);
        break;
    case 1:
        printf("%d������\n",year);
        break;
    }
    return 0;
}
