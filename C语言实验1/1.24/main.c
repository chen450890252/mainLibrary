#include <stdio.h>

/*��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮�͡� */

int main()
{
    int i;
    double a,b,c,s;
    a = b = 1;
    c = 0;
    s = 0;
    for(i = 0; i < 20; i++)
    {
        c = a + b;
        s = s + c / a;
        printf("%.0f/%.0f\n",c,a);
        b = a;
        a = c;
    }
    printf("\n%f\n",s);
    return 0;
}
