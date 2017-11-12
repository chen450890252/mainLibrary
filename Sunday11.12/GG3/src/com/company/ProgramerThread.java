package com.company;

public class ProgramerThread implements Runnable
{
    private int id;
    private int newBrick;
    public ProgramerThread(int id)
    {
        this.id = id;
    }
    @Override
    public void run()
    {
        while(Brick.getBrickCount() > 0)
        {
            if(Brick.getBrickCount() > 200)    break;
            if(Brick.getBrickCount() <= 1)
            {
                Brick.setBrickCount(0);
            }
            else
            {
                newBrick = Brick.getBrickCount() - 2;
                Brick.setBrickCount(newBrick);
            }
            System.out.println("我是" + id +"号程序猿，" + "我挖了两块砖" + "还剩" + newBrick + "块");
            try {
                Thread.sleep(10);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        finish();

    }
    public synchronized void finish()
    {
        if(Brick.getBrickCount() <= 0)
        {
            System.out.println("我是" + id + "号程序猿,砖挖完了,停下来看妹子");
        }
    }
}
