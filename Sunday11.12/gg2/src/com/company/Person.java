package com.company;

public class Person
{
    private String name;
    private Context context;
    public Person(String name,Context context)
    {
        this.name = name;
        this.context = context;
    }
    public void setContext(Context context) {
        this.context = context;
    }

    public void JustDoIt() {
        System.out.print(name + ":");
        this.context.Do();
    }
}
