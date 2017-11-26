#include <stdio.h>

/*输入三个整数x,y,z，请把这三个数由小到大输出*/

int main()
{
    int nums[5];
    printf("请输入三个数,帮你排序：");
    for(int i = 0;i < 3;i++)
    {
        scanf("%d",&nums[i]);
    }
    for(int i = 0;i < 3;i++)
    {
        for(int j  = 0;j < 3 - i;j++)
        {
            if(nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    for(int i = 0;i < 3;i++)
    {
        printf("%d\n",nums[i]);
    }
    return 0;
}
