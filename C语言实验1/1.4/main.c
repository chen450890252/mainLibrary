#include <stdio.h>
#include <math.h>

/*��Ŀ��һ�������ǡ�õ�����������֮�ͣ���
�����ͳ�Ϊ��������������6=1��2��3.��� ��
��1000���ڵ����������� */

int main()
{
    int i,j = 0;
    int numS[100];
    int num;
    int count = 0;
    printf("����������Ե�����\n");
    scanf("%d",&num);
    for(i = 1;i < num;i++)
    {
        if(num % i == 0)
        {
            numS[j] = i;
            j++;
        }
    }
    for(i = 0;i < j;i++)
    {
        count = count + numS[i];
    }
    if(count == num)
    {
        printf("%d��һ������\n",num);
    }
    else
        printf("%d����һ������\n",num);
    return 0;
}
