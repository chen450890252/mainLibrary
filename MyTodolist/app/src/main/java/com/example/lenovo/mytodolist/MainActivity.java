package com.example.lenovo.mytodolist;

import android.content.Intent;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.Button;
import android.widget.CheckedTextView;
import android.widget.ListView;
import java.util.ArrayList;
import java.util.List;

public class MainActivity extends AppCompatActivity implements View.OnClickListener, AdapterView.OnItemClickListener
{
//    private List<CheckedTextView> checkedTextViewList = new ArrayList<>();
    private ListAdapter listAdapter;
    private SQLiteDatabase database;
    private Intent intent;
    private Button addBtn;
    private ListView listView;
    private int openId;
    private boolean isHasClickItem = false;
    private int count;
    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        newDatabase();
        count = getItemCount(database);
        listAdapter = new ListAdapter(database,count);
        listView = (ListView)findViewById(R.id.list);
        listView.setAdapter(listAdapter);
        listView.setOnItemClickListener(this);
        addBtn = (Button)findViewById(R.id.addbtn);
        addBtn.setOnClickListener(this);
    }

    @Override
    protected void onResume()
    {
        super.onResume();
        listAdapter.notifyDataSetChanged();
    }

    @Override
    public void onClick(View v)
    {
        switch (v.getId())
        {
            case R.id.addbtn:
                add();
                break;
            default:
                break;
        }
    }

    @Override
    public void onItemClick(AdapterView<?> parent, View view, int position, long id)
    {
        openId = position;
        isHasClickItem = true;
        intent = new Intent(MainActivity.this,EditActivity.class);
        intent.putExtra("id",(int)id);
        startActivity(intent);
    }

    public void newDatabase()
    {
        database = SQLiteDatabase.openOrCreateDatabase(this.getFilesDir().toString() +
                "/notice.db3",null);
        database.execSQL("create table if not exists mytodolist (" +
                "id integer primary key autoincrement," +
                "detailtext text)");
    }

    public void add()
    {
        listAdapter.setCount(count++);
        database.execSQL("insert into mytodolist (detailtext) values (' ')");
    }

    public int getItemCount(SQLiteDatabase database)
    {
        Cursor cursor = database.rawQuery("select count(*) from mytodolist",null);
        cursor.moveToFirst();
        int count = cursor.getInt(0);
        cursor.close();
        return count;
    }
}
