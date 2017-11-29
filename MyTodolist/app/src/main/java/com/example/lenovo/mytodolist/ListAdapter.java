package com.example.lenovo.mytodolist;

import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.CheckBox;
import android.widget.RadioButton;
import android.widget.TextView;


/**
 * Created by lenovo on 2017/11/29.
 */

public class ListAdapter extends BaseAdapter
{
    private SQLiteDatabase database;
    private int count;
    public ListAdapter(SQLiteDatabase database,int count)
    {
        this.database = database;
        this.count = count;
    }
    @Override
    public int getCount()
    {
        return count;
    }

    @Override
    public Object getItem(int position)
    {
        return null;
    }

    @Override
    public long getItemId(int position)
    {
        return position;
    }

    @Override
    public View getView(int position, View convertView, ViewGroup parent)
    {
        ViewHolder viewHolder;
        if(convertView == null)
        {
            Context context = parent.getContext();
            convertView = LayoutInflater.from(context).inflate(R.layout.item_layout,parent,false);
            viewHolder = new ViewHolder(convertView);
            convertView.setTag(viewHolder);
        }
        else
        {
            viewHolder = (ViewHolder)convertView.getTag();
        }
        updateListText(position,convertView,viewHolder);
        return convertView;
    }

    private class ViewHolder
    {
        TextView textView;
        public ViewHolder(View itemView)
        {
            textView = (TextView) itemView.findViewById(R.id.textview);
        }
    }

    public void updateListText(int position,View view,ViewHolder viewHolder)
    {
        viewHolder.textView = (TextView) view.findViewById(R.id.textview);
        Cursor cursor = database.rawQuery("select detailtext from mytodolist where id like " + (position + 1) + "",null);
        if(cursor.moveToFirst() && cursor != null)
        {
            do{
                viewHolder.textView.setText(cursor.getString(cursor.getColumnIndex("detailtext")));
            }while (cursor.moveToNext());
        }
        cursor.close();
    }

    public void setCount(int count)
    {
        this.count = count;
        notifyDataSetChanged();
    }
}
