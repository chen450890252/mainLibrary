package com.company;

public class Brick
{
    private static int brickCount = 200;
    public static int getBrickCount() {
        return brickCount;
    }
    public synchronized static void setBrickCount(int brickCount) {
        Brick.brickCount = brickCount;
    }
}
