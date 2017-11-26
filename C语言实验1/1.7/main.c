#include <stdio.h>

/*
题目：译密码，输入一串字符，要求将其中的大小写字母变为字母表
其后的四个输出，即a变为e，b变为f等，但是最后的四个字母w、x、
y和z则变为a、b、c和d，大写字母作类似的处理。
*/

int main()
{
    int i = 0;
    char password[100];
    printf("输入密码:\n");
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
