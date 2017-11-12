package com.company;

public class DesignThread implements Runnable
{
    private int id;
    private int newBrick;
    public DesignThread(int id)
    {
        this.id = id;
    }

    @Override
    public void run()
    {
        while(Brick.getBrickCount() < 200)
        {
            if(Brick.getBrickCount() <= 0)  break;
            if(Brick.getBrickCount() > 200)
            {
                Brick.setBrickCount(0);
                System.out.println("我是" + id + "号妹子,墙补完了,停下来化妆");
                break;
            }
            newBrick = Brick.getBrickCount() + 1;
            Brick.setBrickCount(newBrick);
            System.out.println("我是" + id +"号妹子，" + "我补了一块砖" + "还剩" + newBrick + "块");
            try {
                Thread.sleep(5);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }


    }
}
