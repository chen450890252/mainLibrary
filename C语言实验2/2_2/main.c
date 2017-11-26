#include <stdio.h>

/*打印出杨辉三角形*/

int main()
{
    int nums[50][50] = {0};
    nums[0][0] = 1;
    nums[1][0] = 1;
    nums[1][1] = 1;
    for(int i = 2; i < 10;i++)
    {
        for(int j = 0;j < i + 1;j++)
        {
            nums[i][j] = nums[i - 1][j - 1] + nums[i - 1][j];
        }
    }
    for(int i = 0;i < 10;i++)
    {
        for(int j = 0;j < 10 - i;j++)
        {
            printf("   ");
        }
        for(int j = 0;j < i + 1;j++)
        {
            printf("%6d",nums[i][j]);
        }
        printf("\n");
    }
    return 0;
}
