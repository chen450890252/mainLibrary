package com.company;

public class Main {
    public static void main(String[] args)
    {
        ProgramerThread programer1 = new ProgramerThread(1);
        ProgramerThread programer2 = new ProgramerThread(2);
        DesignThread Designer1 = new DesignThread(1);
        DesignThread Designer2 = new DesignThread(2);
        new Thread(programer1).start();
        new Thread(programer2).start();
        new Thread(Designer1).start();
        new Thread(Designer2).start();
    }
}
