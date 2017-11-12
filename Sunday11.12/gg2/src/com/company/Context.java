package com.company;

import com.company.haven.Performance;

public class Context
{
    private Performance performance;
    public Context(Performance performance)
    {
        this.performance = performance;
    }
    public void Do()
    {
        performance.performance();
    }
}
