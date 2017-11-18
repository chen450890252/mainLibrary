package com.example.lenovo.fourfilesnotice;

import android.widget.CheckedTextView;

/**
 * Created by lenovo on 2017/11/15.
 */

public class Item
{
    private int checkedTextView;
    private int id;


    public Item(int checkedTextView,int id)
    {
        this.id = id;
        this.checkedTextView = checkedTextView;
    }

    public int getId()
    {
        return id;
    }

    public void setId(int id)
    {
        this.id = id;
    }

    public int getCheckedTextView()
    {
        return checkedTextView;
    }

    public void setCheckedTextView(int checkedTextView)
    {
        this.checkedTextView = checkedTextView;
    }
}
