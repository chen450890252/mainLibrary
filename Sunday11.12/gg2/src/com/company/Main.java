package com.company;

import com.company.haven.Dance;
import com.company.haven.Gay;
import com.company.haven.Sing;

public class Main
{
    public static void main(String[] args)
    {
        Context gayContext = new Context(new Gay());
        Context singContext = new Context(new Sing());
        Context dancecContext = new Context(new Dance());
        Person A = new Person("学生A",singContext);
        Person B = new Person("学生B",dancecContext);
        Person C = new Person("学生C",gayContext);
        A.JustDoIt();
        B.JustDoIt();
        C.JustDoIt();
        System.out.println("学生A、学生B：哇，搞基真酷！");
        A.setContext(gayContext);
        B.setContext(gayContext);
        A.JustDoIt();
        B.JustDoIt();
        C.JustDoIt();
        System.out.println("三个人：我们都要搞基！");
    }
}
