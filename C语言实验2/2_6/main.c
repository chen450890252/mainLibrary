#include <stdio.h>

/*
编程实现冒泡排序算法，数组长度10，数据类型为int
*/

int main()
{
    int sort[10];
    for(int i = 0;i < 10;i++)
    {
        for(int j = 0;j < 9 - i;j++)
        {
            if(sort[j] > sort[j + 1])
            {
                int temp = sort[j];
                sort[j] = sort[j + 1];
                sort[j + 1] = temp;
            }
        }
    }
    for(int i = 0;i < 10;i++)
    {
        printf("%d\n",sort[i]);
    }

    return 0;
}
