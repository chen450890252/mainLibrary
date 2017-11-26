#include <stdio.h>

/*将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。*/

int decompose(int a);
int main()
{
    int nums[20] = {0};
    int index = 0;
    int number;
    printf("输入一个正整数，帮你分解质因数:\n");
    scanf("%d",&number);
    for(int i = 2;i <= number;i++)
    {
        if(number == i)
            nums[index++] = i;
        else if(i < number && number % i == 0)
        {
            nums[index++] = i;
            number = number / i;
            i = 1;
        }
    }
    printf("分解出来的质因数是:");
    for(int i = 0;i < index;i++)
    {
        printf("%d  ",nums[i]);
    }
    return 0;
}


