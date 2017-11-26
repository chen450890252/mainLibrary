#include <stdio.h>

/*
利用条件运算符的嵌套来完成此题：学习成绩>=90分
的同学用A表示，60-89分之间的用B表示， 60分以下
的用C表示。*/

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
