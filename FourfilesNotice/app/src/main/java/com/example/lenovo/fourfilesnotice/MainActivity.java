package com.example.lenovo.fourfilesnotice;

import android.content.Intent;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.nfc.Tag;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.ListView;

import java.util.ArrayList;
import java.util.List;

public class MainActivity extends AppCompatActivity implements View.OnClickListener
        ,AdapterView.OnItemClickListener
{
    private ListView listView;
    private List<Item> itemList = new ArrayList<>();
    private myAdapter myAdapter;
    private Button button;
    private SQLiteDatabase db;
    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        onDatebase();
        button = (Button)findViewById(R.id.button);
        listView = (ListView)findViewById(R.id.list_item);
        iniListView(db,listView,itemList);
        button.setOnClickListener(this);
        listView.setOnItemClickListener(this);
    }

    @Override
    protected void onStart()
    {
        super.onStart();
//        myAdapter.showText();
    }

    @Override
    public void onClick(View view)
    {
        switch (view.getId())
        {
            case R.id.button:
                myAdapter.add();
                break;
            default:
                break;
        }
    }

    @Override
    public void onItemClick(AdapterView<?> parent, View view, int position, long id)
    {
        Intent intent = new Intent(MainActivity.this,SecondActivity.class);
        Bundle bundle = new Bundle();
        bundle.putInt("id", (int) listView.getAdapter().getItemId(position));
        intent.putExtras(bundle);
        startActivityForResult(intent,1);
    }
    //创建或打开数据库
    public void onDatebase()
    {
        db = SQLiteDatabase.openOrCreateDatabase(this.getFilesDir().toString() +
                "/notice.db3",null);
        db.execSQL("create table if not exists noticetable (" +
                "id integer primary key autoincrement," +
                "detailtext text," +
                "textviewid int)");
    }
    public void iniListView(SQLiteDatabase db, ListView listView,List<Item> itemList)
    {
        int i;
        for(i = 0;i < getListCount(db);i++)
        {
            itemList.add(new Item(getListViewId(db,i+1),i+1));
        }
        myAdapter = new myAdapter(itemList,db);
        listView.setAdapter(myAdapter);
    }

    public Long getListCount(SQLiteDatabase db)
    {
        Cursor cursor = db.rawQuery("select count(*) from noticetable",null);
        cursor.moveToFirst();
        Long count = cursor.getLong(0);
        cursor.close();
        return count;
    }
    public int getListViewId(SQLiteDatabase db,int i)
    {
        Cursor cursor = db.rawQuery("select textviewid from noticetable where id like " + i,null);
        cursor.moveToFirst();
        int viewid = cursor.getInt(0);
        cursor.close();
        return viewid;
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data)
    {
        if(requestCode == 1 && resultCode == 2)
        {
            Bundle reData = data.getExtras();
            String text = reData.getString("text");
//            myAdapter.showText(text);
//            listView.setAdapter(myAdapter);
        }
    }
}
