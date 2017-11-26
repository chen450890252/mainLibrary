#include <stdio.h>
/*题目：有1、2、3、4个数字，能组成多少个互不相同且无重复
数字的三位数？都是多少？
程序分析：可填在百位、十位、个位的数字都是1、2、3、4。
组成所有的排列后再去 掉不满足条件的排列。 */
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
    printf("一共有%d个数\n",count);
    printf("分别是：");
    for(i = 0;i < count;i++)
    {
        printf("%d\n",num[i]);
    }

    return 0;
}
