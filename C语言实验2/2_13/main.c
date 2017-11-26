#include <stdio.h>
#include <math.h>

/*请找出1-999中所有平方回文数的数并输出*/


int reverse(int v)
{
    int r = 0;
    while(v)
    {
        r = r*10 + v%10;    //取v的结尾数字，置于r的尾端，从而达到反序效果。
        v/=10;              //将剩余各个位向右移动一位。
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
            printf("%d    ", i);//每个输出占4列，达到对其效果。
        }
    }
    return 0;
}
