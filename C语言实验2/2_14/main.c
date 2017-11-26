#include <stdio.h>

/*输入一串字符统计其中的单词个数。各个单词间用空格隔开，空格数可以是多个*/

int main()
{
    char str[1000];
    int i = 0,count = 0;
    printf("输入一个单词串，我会告诉你单词数\n");
    gets(str);
    if(str[0] != ' ')   count = 1;
    for(i = 1;str[i] != '\0';i++)
    {
        if(str[i-1]==' '&& str[i]!=' ')
            count++;
    }
    printf("一共有%d个单词\n",count);
    return 0;
}

