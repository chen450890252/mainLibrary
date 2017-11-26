#include <stdio.h>

/*一球从100米高度自由落下，每次落地后反跳回原高度的一半；
再落下，求它在 第10次落地时，共经过多少米？第10次反弹多高*/

int main()
{
    double s = 100;
    double h = s / 2;
    int n;
    for(n = 2;n <= 10;n++)
    {
        s = s + 2 * h;/*第n次落地时共经过的米数*/
        h = h / 2; /*第n次反跳高度*/
    }
    printf("一共进过了%f米\n",s);
    printf("第十次反弹%f米\n",h);
    return 0;
}
