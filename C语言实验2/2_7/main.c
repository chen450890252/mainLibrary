#include <stdio.h>
/*
���ʵ��ѡ�������㷨
*/
int main()
{
    int nums[10] = {152,326,425,12,53,685,125,689,652,124};
    int temp;//�����õ���ʱ����
    int minIndex = 0;//��¼��С�±�
    for(int i = 0;i < 10;i++)
    {
        minIndex = i;
        for(int j = i;j < 10;j++)
        {
            if(nums[minIndex] > nums[j])
            {
                minIndex = j;
            }
        }
        temp = nums[i];
        nums[i] = nums[minIndex];
        nums[minIndex] = temp;
    }
    for(int a = 0;a < 10;a++)
    {
        printf("%d\n",nums[a]);
    }
    return 0;
}
