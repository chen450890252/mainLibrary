#include <stdio.h>

/*
���������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90��
��ͬѧ��A��ʾ��60-89��֮�����B��ʾ�� 60������
����C��ʾ��*/

int main()
{
    struct student
    {
        int grade;
        char level;
    };
    struct student students;
    scanf("%d",&students.grade);
    students.level = (students.grade >= 90)?'A':(students.grade >= 60)?'B':'C';
    printf("%c",students.level);
    return 0;
}
