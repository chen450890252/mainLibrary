#include <stdio.h>

/*
题目：一个整数，它加上100后是一个完全平方数，再加上
168又是一个完全平方数，请问该数是多少？
程序分析：在10万以内判断，先将该数加上100后再开方，
再将该数加上268后再开方，如果开方后的结果满足如下条
件，即是结果。
*/

int main()
{
    int num;
    int temp1;
    int flag1 = 0;
    int flag2 = 0;
    for(num = 0;num < 100000;num++)
    {
        for(temp1 = pow(num + 100,0.5) - 1;temp1 <= pow(num + 100,0.5) ;temp1++)
        {
            if(temp1 * temp1 == num + 100)
                flag1 = 1;
        }
        for(temp1 = pow(num + 168,0.5) - 1;temp1 <= pow(num + 168,0.5) ;temp1++)
        {
            if(temp1 * temp1 == num + 168)
                flag2 = 1;
        }
        if(flag1 == 1 && flag2 == 1)
            printf("满足该条件的数是：%d",num);
        flag1 = 0;
        flag2 = 0;
    }
    return 0;
}
