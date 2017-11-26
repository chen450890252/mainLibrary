#include <stdio.h>

/*输入一个3*3矩阵矩阵，判断它是否行递增，列递增*/

void isIncrease(int a[3][3]);
int main()
{
    int a[3][3],i,j;
    printf("请输入9个数字，我帮你生成一个矩阵\n");
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
            scanf("%d",&a[i][j]);
    }
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    isIncrease(a);
    return 0;
}
void isIncrease(int a[3][3])
{
    int isLineInc = 1;
    int isRowInc = 1;
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 2;j++)
        {
            if(a[i][j] > a[i][j + 1])
                isLineInc = 0;
        }
    }
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 2;j++)
        {
            if(a[j][i] > a[j + 1][i])
                isRowInc = 0;
        }
    }
    switch(isLineInc)
    {
    case 1:
        printf("该矩阵行递增\n");
        break;
    case 0:
        printf("该矩阵行不递增\n");
        break;
    }
    switch(isRowInc)
    {
    case 1:
        printf("该矩阵列递增\n");
        break;
    case 0:
        printf("该矩阵列不递增\n");
        break;
    }
}
