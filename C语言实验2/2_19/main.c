#include <stdio.h>

/*���������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ��*/

int main()
{
    char words[10];
    printf("������ĸ�ж����ڼ�\n�������һ����ĸ:\n");
    scanf("%c",&words[0]);
    switch(words[0])
    {
    case 'm':case 'M':
        printf("����һ\n");
        break;
    case 'w':case 'W':
        printf("������");
        break;
    case 'f':case 'F':
        printf("������\n");
        break;
    case 't':case 'T':
        getchar();
        printf("���������T,�޷��ж����ܶ��������ģ�������ڶ�����ĸ\n");
        scanf("%c",&words[1]);
        if(words[1] == 'u' || words[1] == 'U')  printf("֪���ˣ������ڶ�\n");
        else if(words[1] == 'h' || words[1] == 'H') printf("֪���ˣ���������\n");
        else printf("���Ƥ�ˣ��㶺������\n");
        break;
    case 's':case 'S':
        getchar();
        printf("���������S,�޷��ж����ܶ��������ģ�������ڶ�����ĸ\n");
        scanf("%c",&words[1]);
        if(words[1] == 'u' || words[1] == 'U')  printf("֪���ˣ���������\n");
        else if(words[1] == 'a' || words[1] == 'A') printf("֪���ˣ���������\n");
        else printf("���Ƥ�ˣ��㶺������\n");
        break;
    default:
        printf("���Ƕ��ҵĻ��ǲ���İ�������������\n");
        break;
    }
    return 0;
}
