#include <stdio.h>

/*��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�
����2+22+222+2222+22222(��ʱ ����5�������)����
��������м��̿��ơ�
����������ؼ��Ǽ����ÿһ���ֵ�� */


int main()
{
    int times = 0;
    int i = 0;
    int a = 0;
    int sum = 0;
    int num = 0;
    printf("�ظ���������ɶѽ��\n");
    scanf("%d",&num);
    printf("��Ҫ�ظ����Σ�\n");
    scanf("%d",&times);
    for (i = 0; i < times; i++)
    {
    a = a * 10 + num;
    sum = sum + a;
    }
    printf("%d", sum);
    return 0;
}
