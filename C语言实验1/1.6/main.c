#include <stdio.h>
#include <math.h>
/*
��Ŀ���󷽳�ax2+bx+c=0�ĸ���Ҫ������ϵ��a��b��c��������̵ĸ���
�������������ϵ����ͬ����
*/
int main()
{
    int a,b,c;
    int count = 0;
    double x1 = 0,x2 = 0;
    printf("���뷽��ax^2 + bx + c = 0��a,b,c\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a == 0)
    {
        count = 1;
        x1 = - c/b;
    }
    else
    {
        if(pow(b,2) - 4*a*c == 0)
        {
            count = 1;
            x1 = -b/2*a*c;
        }
        if(pow(b,2) - 4*a*c > 0)
        {
            count = 2;
            x1 = (-b+sqrt(pow(b,2)-4*a*c))/2*a*c;
            x2 = (-b-sqrt(pow(b,2)-4*a*c))/2*a*c;
        }
    }
    if(count == 0)
        printf("�÷����޽�\n");
    if(count == 1)
        printf("������һ����Ϊ%f",x1);
    if(count == 2)
        printf("���������������ֱ�Ϊ%f��%f",x1,x2);
    return 0;
}
