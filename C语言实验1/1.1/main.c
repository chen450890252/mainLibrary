#include <stdio.h>
#include <math.h>

/*
 *��Ŀ���ж�101-200֮���ж��ٸ����������������������
 */

int main()
{
    int i;
    printf("�����ǣ�������������֮�����е�����\n");
    for(i = 101; i < 201; i++)
    {
        int is = 1;
        for(int j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
            {
                is = 0;
                break;
            }
        }
        if(is == 1)
            printf("%d\n",i);
    }
    return 0;
}
