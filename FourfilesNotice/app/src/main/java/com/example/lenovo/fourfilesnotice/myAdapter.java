package com.example.lenovo.fourfilesnotice;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.CheckBox;
import android.widget.CheckedTextView;
import android.widget.EditText;

import java.util.List;

/**
 * Created by lenovo on 2017/11/15.
 */

public class myAdapter extends BaseAdapter
{
    private List<Item> itemList;
    private int id = 2;

    public myAdapter(List<Item> itemList)
    {
        this.itemList = itemList;
    }

    @Override
    public int getCount()
    {
        return itemList == null ? 0 : itemList.size();
    }

    @Override
    public Object getItem(int i)
    {
        return itemList.get(i);
    }

    @Override
    public long getItemId(int i)
    {
        return i;
    }

    @Override
    public View getView(int i, View view, ViewGroup viewGroup)
    {
        ViewHolder viewHolder;
        if(view == null)
        {
            Context context = viewGroup.getContext();
            view = LayoutInflater.from(context).inflate(R.layout.item_layout,viewGroup,false);
            viewHolder = new ViewHolder(view);
            view.setTag(viewHolder);
        }
        else
        {
            viewHolder = (ViewHolder)view.getTag();
        }
        return view;
    }
    public void add()
    {
        itemList.add(new Item(R.id.second_edit,id++));
        notifyDataSetChanged();
    }

    public void remove(int pos)
    {
        itemList.remove(pos);
        notifyDataSetChanged();
    }

    private class ViewHolder
    {
        CheckedTextView checkedTextView;
        public ViewHolder(View itemView)
        {
            checkedTextView = (CheckedTextView)itemView.findViewById(R.id.second_edit);
        }
    }
}
