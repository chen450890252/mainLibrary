package com.example.lenovo.fourfilesnotice;

import android.content.Intent;
import android.database.sqlite.SQLiteDatabase;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
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
        Item item = new Item(R.id.second_edit,1);
        itemList.add(item);
        myAdapter = new myAdapter(itemList);
        listView.setAdapter(myAdapter);
        button.setOnClickListener(this);
        listView.setOnItemClickListener(this);
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
//        bundle.putInt("id",1);
        bundle.putInt("id", (int) listView.getAdapter().getItemId(position));
        intent.putExtras(bundle);
        startActivity(intent);
    }
    //创建或打开数据库
    public void onDatebase()
    {
        db = SQLiteDatabase.openOrCreateDatabase(this.getFilesDir().toString() +
                "/notice.db3",null);
        db.execSQL("create table if not exists fourfiretable (" +
                "id integer primary key autoincrement," +
                "detailtext text)");
    }
}
