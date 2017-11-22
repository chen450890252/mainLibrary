package com.example.lenovo.fourfilesnotice;

import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.CheckBox;
import android.widget.CheckedTextView;
import android.widget.EditText;

import java.nio.charset.CharsetEncoder;
import java.util.List;

/**
 * Created by lenovo on 2017/11/15.
 */

public class myAdapter extends BaseAdapter
{
    private List<Item> itemList;
    private SQLiteDatabase db;
    public myAdapter(List<Item> itemList,SQLiteDatabase db)
    {
        this.itemList = itemList;
        this.db = db;
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
//            showText((CheckedTextView)view,i);
            viewHolder = new ViewHolder(view,i);
            view.setTag(viewHolder);
        }
        else
        {
//            showText((CheckedTextView)view,i);
            viewHolder = (ViewHolder)view.getTag();
        }
        return view;
    }

    public void add()
    {
        itemList.add(new Item(R.id.second_edit,getLastLine(db) + 1));
        notifyDataSetChanged();
        db.execSQL("insert into noticetable (detailtext,textviewid) values (' '," + R.id.second_edit + ")");
    }

    public void remove(int id)
    {
        itemList.remove(id);
        notifyDataSetChanged();
        db.delete("noticetable","id like " + id,null);
    }
    private class ViewHolder
    {
        CheckedTextView checkedTextView;
        public ViewHolder(View itemView,int id)
        {
            checkedTextView = (CheckedTextView)itemView.findViewById(R.id.checktext);
            showText(checkedTextView,id);
        }
    }

    public int getLastLine(SQLiteDatabase db)
    {
        Cursor cursor = db.rawQuery("select count(*) from noticetable",null);
        cursor.moveToFirst();
        int count = cursor.getInt(0);
        cursor.close();
        return count;
    }

    public void showText(CheckedTextView checkedTextView,int id)
    {
        Cursor cursor = db.rawQuery("select detailtext from noticetable where id like " + (id + 1),null);
        cursor.moveToFirst();
        if(!cursor.isAfterLast())
        {
            String text = cursor.getString(0);
            checkedTextView.setText(text);
        }
    }
}
