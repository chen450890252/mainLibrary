#include <stdio.h>
/*��Ŀ����1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ�
���ֵ���λ�������Ƕ��٣�
��������������ڰ�λ��ʮλ����λ�����ֶ���1��2��3��4��
������е����к���ȥ �����������������С� */
int main()
{
    int count = 64;
    int numS[3];
    int num[65];
    int l = 0;
    int i;
    int temp;
    for(i = 1;i <= 4;i++)
    {
        for(int j = 1;j <= 4;j++)
        {
            for(int k = 1;k <= 4;k++)
            {
                num[l] = i * 100 + j * 10 + k;
                l++;
            }
        }
    }

    for(;l >= 0;l--)
    {
        i = 0;
        temp = num[l - 1];
        while(temp > 1)
        {
            numS[i] = temp % 10;
            temp /= 10;
            i++;
        }
        if(numS[0] == numS[1] || numS[0] == numS[2] || numS[1] == numS[2])
        {
            count--;
        }
    }
    printf("һ����%d����\n",count);
    printf("�ֱ��ǣ�");
    for(i = 0;i < count;i++)
    {
        printf("%d\n",num[i]);
    }

    return 0;
}
