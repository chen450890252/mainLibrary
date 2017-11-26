#include <stdio.h>
#include <windows.h>

/*
输一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
程序分析：利用while语句,条件为输入的字符不为'\n'.
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
    printf ("字母：%d\n", letter);
    printf ("空格：%d\n", space);
    printf ("数字：%d\n", digit);
    printf ("其它字符：%d\n", other);
    return 0;
}
