#include <stdio.h>
#include <math.h>
/*
题目：求方程ax2+bx+c=0的根，要求输入系数a、b和c，输出方程的根。
程序分析：考虑系数不同的情
*/
int main()
{
    int a,b,c;
    int count = 0;
    double x1 = 0,x2 = 0;
    printf("输入方程ax^2 + bx + c = 0的a,b,c\n");
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
        printf("该方程无解\n");
    if(count == 1)
        printf("方程有一个根为%f",x1);
    if(count == 2)
        printf("方程有两个根，分别为%f和%f",x1,x2);
    return 0;
}
