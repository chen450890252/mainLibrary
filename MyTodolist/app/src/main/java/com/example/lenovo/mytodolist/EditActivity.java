package com.example.lenovo.mytodolist;

import android.content.Intent;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.EditText;

public class EditActivity extends AppCompatActivity
{
    private SQLiteDatabase database;
    private EditText editText;
    private Intent intent;
    private int id;
    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_edit);
        editText = (EditText)findViewById(R.id.edit);
        newDatabase();
        intent = getIntent();
        id = intent.getIntExtra("id",0);
        showText();
    }

    @Override
    protected void onPause()
    {
        super.onPause();
        database.execSQL("update mytodolist set detailtext = '" + editText.getText().toString() + "' where id = " + (id + 1));
    }

    public void showText()
    {
        Cursor cursor = database.rawQuery("select detailtext from mytodolist where id like " + (id + 1) + "",null);
        if(cursor.moveToFirst() && cursor != null)
        {
            do{
                editText.setText(cursor.getString(cursor.getColumnIndex("detailtext")));
            }while (cursor.moveToNext());
        }
        cursor.close();
    }

    public void newDatabase()
    {
        database = SQLiteDatabase.openOrCreateDatabase(this.getFilesDir().toString() +
                "/notice.db3",null);
        database.execSQL("create table if not exists mytodolist (" +
                "id integer primary key autoincrement," +
                "detailtext text)");
    }
}
