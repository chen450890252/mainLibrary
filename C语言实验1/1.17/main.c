#include <stdio.h>

/*��һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��*/

int decompose(int a);
int main()
{
    int nums[20] = {0};
    int index = 0;
    int number;
    printf("����һ��������������ֽ�������:\n");
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
    printf("�ֽ��������������:");
    for(int i = 0;i < index;i++)
    {
        printf("%d  ",nums[i]);
    }
    return 0;
}


