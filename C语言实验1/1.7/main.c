#include <stdio.h>

/*
��Ŀ�������룬����һ���ַ���Ҫ�����еĴ�Сд��ĸ��Ϊ��ĸ��
�����ĸ��������a��Ϊe��b��Ϊf�ȣ����������ĸ���ĸw��x��
y��z���Ϊa��b��c��d����д��ĸ�����ƵĴ���
*/

int main()
{
    int i = 0;
    char password[100];
    printf("��������:\n");
    while(password[i - 1] != '\n')
    {
        password[i] = getchar();
        i++;
    }
    for(int j = 0;j < i - 1;j++)
    {
        switch(password[j])
        {
        case 'w':
            printf("a");
            break;
        case 'x':
            printf("b");
            break;
        case 'y':
            printf("c");
            break;
        case 'z':
            printf("d");
            break;
        default:
            printf("%c",password[j] + 4);
            break;
        }
    }
}
