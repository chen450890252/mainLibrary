#include <stdio.h>

/*����һ���ַ�ͳ�����еĵ��ʸ������������ʼ��ÿո�������ո��������Ƕ��*/

int main()
{
    char str[1000];
    int i = 0,count = 0;
    printf("����һ�����ʴ����һ�����㵥����\n");
    gets(str);
    if(str[0] != ' ')   count = 1;
    for(i = 1;str[i] != '\0';i++)
    {
        if(str[i-1]==' '&& str[i]!=' ')
            count++;
    }
    printf("һ����%d������\n",count);
    return 0;
}

