#include <stdio.h>

/*通过键盘输入 3 名学生 4 门课程的成绩，分别求每个学生的
平均成绩和每门课程的平均成绩。要求所有成绩均放入一个 4
行 5 列的数组中，输入时同一人数据间用空格 , 不同人用回
车其中最后一列和最后一行分别放每个学生的平均成绩、每门
课程的平均成绩及班级总平均分。*/

int main()
{
    int i,j,a[4][5];
    printf("请输入成绩：\n");
    for(i = 0;i < 3;i++)
    {
        printf("输入第%d个学生的成绩\n",i + 1);
        for(j = 0;j < 4;j++)
        {
            switch(j)
            {
            case 0:
                printf("微积分:\n");
                break;
            case 1:
                printf("数据结构\n");
                break;
            case 2:
                printf("大学英语\n");
                break;
            case 3:
                printf("当然是C语言辣\n");
                break;
            }
            scanf("%3d",&a[i][j]);
        }
    }
    for(i = 0;i < 3;i++)
        a[i][4] = (a[i][0] + a[i][1] + a[i][2] + a[i][3]) / 4;
    for(j = 0;j < 5;j++)
        a[3][j] = (a[0][j] + a[1][j] + a[2][j]) / 3;
    printf("数组为：\n");
    for(i = 0;i < 4;i++)
    {
        for(j = 0;j < 5;j++)
            printf("%-4d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
