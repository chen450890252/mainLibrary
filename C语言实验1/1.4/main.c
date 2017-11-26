#include <stdio.h>
#include <math.h>

/*题目：一个数如果恰好等于它的因子之和，这
个数就称为“完数”。例如6=1＋2＋3.编程 找
出1000以内的所有完数。 */

int main()
{
    int i,j = 0;
    int numS[100];
    int num;
    int count = 0;
    printf("输入你想测试的数：\n");
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
        printf("%d是一个完数\n",num);
    }
    else
        printf("%d不是一个完数\n",num);
    return 0;
}
