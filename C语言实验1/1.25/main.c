#include <stdio.h>

/*��1+2!+3!+...+20!�ĺ� */

int main()
{
    long item = 1;
    long sum = 0;
    for(int i = 0;i < 21;i++)
    {
        for(int j = i;j > 0;j--)
        {
            item *= j;
        }
        sum += item;
        item = 1;
    }
    printf("�۳˽����%d",sum);
    return 0;
}
