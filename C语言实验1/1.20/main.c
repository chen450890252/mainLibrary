#include <stdio.h>

/*求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
例如2+22+222+2222+22222(此时 共有5个数相加)，几
个数相加有键盘控制。
程序分析：关键是计算出每一项的值。 */


int main()
{
    int times = 0;
    int i = 0;
    int a = 0;
    int sum = 0;
    int num = 0;
    printf("重复的数字是啥呀：\n");
    scanf("%d",&num);
    printf("想要重复几次？\n");
    scanf("%d",&times);
    for (i = 0; i < times; i++)
    {
    a = a * 10 + num;
    sum = sum + a;
    }
    printf("%d", sum);
    return 0;
}
