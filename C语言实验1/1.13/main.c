#include <stdio.h>

/*������������x,y,z���������������С�������*/

int main()
{
    int nums[5];
    printf("������������,��������");
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
