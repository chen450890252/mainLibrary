#include <stdio.h>

/*请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。*/

int main()
{
    char words[10];
    printf("根据字母判断星期几\n请输入第一个字母:\n");
    scanf("%c",&words[0]);
    switch(words[0])
    {
    case 'm':case 'M':
        printf("星期一\n");
        break;
    case 'w':case 'W':
        printf("星期三");
        break;
    case 'f':case 'F':
        printf("星期五\n");
        break;
    case 't':case 'T':
        getchar();
        printf("你输入的是T,无法判断是周二还是周四，请输入第二个字母\n");
        scanf("%c",&words[1]);
        if(words[1] == 'u' || words[1] == 'U')  printf("知道了，是星期二\n");
        else if(words[1] == 'h' || words[1] == 'H') printf("知道了，是星期四\n");
        else printf("别调皮了，你逗我玩呢\n");
        break;
    case 's':case 'S':
        getchar();
        printf("你输入的是S,无法判断是周二还是周四，请输入第二个字母\n");
        scanf("%c",&words[1]);
        if(words[1] == 'u' || words[1] == 'U')  printf("知道了，是星期六\n");
        else if(words[1] == 'a' || words[1] == 'A') printf("知道了，是星期日\n");
        else printf("别调皮了，你逗我玩呢\n");
        break;
    default:
        printf("你是逗我的还是不会的啊，不跟你玩了\n");
        break;
    }
    return 0;
}
