#include <stdio.h>

/*����һ��3*3��������ж����Ƿ��е������е���*/

void isIncrease(int a[3][3]);
int main()
{
    int a[3][3],i,j;
    printf("������9�����֣��Ұ�������һ������\n");
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
        printf("�þ����е���\n");
        break;
    case 0:
        printf("�þ����в�����\n");
        break;
    }
    switch(isRowInc)
    {
    case 1:
        printf("�þ����е���\n");
        break;
    case 0:
        printf("�þ����в�����\n");
        break;
    }
}
