#include <stdio.h>
#include <math.h>

/*���ҳ�1-999������ƽ�����������������*/


int reverse(int v)
{
    int r = 0;
    while(v)
    {
        r = r*10 + v%10;    //ȡv�Ľ�β���֣�����r��β�ˣ��Ӷ��ﵽ����Ч����
        v/=10;              //��ʣ�����λ�����ƶ�һλ��
    }
    return r;
}
int square(int a)
{
    for(int i = 2;i < a;i++)
    {
        if(i * i == a)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int i;
    for(i = 1; i < 999; i++)
    {
        if(i == reverse(i) && 1 == square(i))
        {
            printf("%d    ", i);//ÿ�����ռ4�У��ﵽ����Ч����
        }
    }
    return 0;
}
