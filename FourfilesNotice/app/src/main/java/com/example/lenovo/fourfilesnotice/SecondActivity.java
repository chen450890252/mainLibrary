package com.example.lenovo.fourfilesnotice;

import android.content.ContentValues;
import android.content.Intent;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.EditText;

public class SecondActivity extends AppCompatActivity
{
    int id;
    EditText editText;
    Intent intentIn;
    SQLiteDatabase db;
    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_second);
        onDatebase();
        intentIn = getIntent();
        id = (int)intentIn.getIntExtra("id",-1);
        editText = (EditText)findViewById(R.id.second_edit);
        showText();
    }
    @Override
    protected void onDestroy()
    {
        super.onDestroy();
        db.execSQL("update noticetable set detailtext = '" + editText.getText().toString() + "' where id = " + (id + 1));
        String text = editText.getText().toString();
        Bundle data = new Bundle();
        data.putString("text",text);
        intentIn.putExtra("text",data);
        SecondActivity.this.setResult(2,intentIn);
    }
    //创建或打开数据库
    public void onDatebase()
    {
        db = SQLiteDatabase.openOrCreateDatabase(this.getFilesDir().toString() +
                "/notice.db3",null);
    }

    public void showText()
    {
            Cursor cursor = db.rawQuery("select detailtext from noticetable where id like " + (id + 1) + "",null);
            if(cursor.moveToFirst() && cursor != null)
            {
                do{
                    editText.setText(cursor.getString(cursor.getColumnIndex("detailtext")));
                }while (cursor.moveToNext());
            }
            cursor.close();
    }
}
