package com.example.lenovo.fourfilesnotice;

import android.content.Intent;
import android.database.sqlite.SQLiteDatabase;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.EditText;

public class SecondActivity extends AppCompatActivity
{
    int id;
    EditText editText;
    String text;
    Bundle data;
    Intent intentOut;
    Intent intentIn;
    SQLiteDatabase db;
    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_second);
        onDatebase();
        intentIn = getIntent();
        id = (int)intentIn.getIntExtra("position",0);
        editText = (EditText)findViewById(R.id.second_edit);
        text = editText.getText().toString();
        data = new Bundle();
        data.putSerializable("detail",text);
        intentOut = new Intent(SecondActivity.this,MainActivity.class);
    }
    @Override
    protected void onDestroy()
    {
        super.onDestroy();
        intentOut.putExtras(data);
    }
    //创建或打开数据库
    public void onDatebase()
    {
        db = SQLiteDatabase.openOrCreateDatabase(this.getFilesDir().toString() +
                "/notice.db3",null);
    }
}
