#include <stdio.h>

/*
��Ŀ��һ��������������100����һ����ȫƽ�������ټ���
168����һ����ȫƽ���������ʸ����Ƕ��٣�
�����������10�������жϣ��Ƚ���������100���ٿ�����
�ٽ���������268���ٿ��������������Ľ������������
�������ǽ����
*/

int main()
{
    int num;
    int temp1;
    int flag1 = 0;
    int flag2 = 0;
    for(num = 0;num < 100000;num++)
    {
        for(temp1 = pow(num + 100,0.5) - 1;temp1 <= pow(num + 100,0.5) ;temp1++)
        {
            if(temp1 * temp1 == num + 100)
                flag1 = 1;
        }
        for(temp1 = pow(num + 168,0.5) - 1;temp1 <= pow(num + 168,0.5) ;temp1++)
        {
            if(temp1 * temp1 == num + 168)
                flag2 = 1;
        }
        if(flag1 == 1 && flag2 == 1)
            printf("��������������ǣ�%d",num);
        flag1 = 0;
        flag2 = 0;
    }
    return 0;
}
