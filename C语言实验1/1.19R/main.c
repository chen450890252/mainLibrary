#include <stdio.h>
#include <windows.h>

/*
��һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
�������������while���,����Ϊ������ַ���Ϊ'\n'.
*/


int main()
{
    int letter, space, digit, other;
    char ch;
    letter = space = digit = other = 0;
    while ((ch = getchar ()) != '\n')
    {
        if (ch>='a' && ch <= 'z' || ch>='A'&&ch<='Z')
            letter++;
        else if (ch>='0' && ch <='9')
            digit++;
        else if (ch == ' ')
            space++;
        else
            other++;
    }
    printf ("��ĸ��%d\n", letter);
    printf ("�ո�%d\n", space);
    printf ("���֣�%d\n", digit);
    printf ("�����ַ���%d\n", other);
    return 0;
}
