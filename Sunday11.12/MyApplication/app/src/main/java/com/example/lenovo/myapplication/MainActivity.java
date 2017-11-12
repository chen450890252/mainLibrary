package com.example.lenovo.myapplication;

import android.content.Context;
import android.content.Intent;
import android.support.v4.widget.DrawerLayout;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.ListView;
import android.widget.RelativeLayout;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity implements View.OnClickListener{
    TextView textView;
    Button button1;
    Button button2;
    private DrawerLayout mDrawer;
    private ListView leftmenu;
    private String[] menuTitles;
    private boolean isDirection_left = false;
    private boolean isDirection_right = false;
    private View showView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        textView = (TextView)findViewById(R.id.text1);
        button1 = (Button)findViewById(R.id.button1);
        button2 = (Button)findViewById(R.id.button2);
        button1.setOnClickListener(this);
        button2.setOnClickListener(this);
        mDrawer = (DrawerLayout)findViewById(R.id.drawerlayout);
        leftmenu = (ListView)findViewById(R.id.left);
        this.showView = leftmenu;
        menuTitles = getResources().getStringArray(R.array.menu_array);
        leftmenu.setAdapter(new ArrayAdapter<String>(this,R.layout.activity_main,R.id.left));
    }

    @Override
    public void onClick(View view) {
        switch (view.getId())
        {
            case R.id.button1:
                textView.setText("I am coming!");
                break;
            case R.id.button2:
                Intent intent = new Intent(MainActivity.this,SecondActivity.class);
                startActivity(intent);
                break;
        }
    }

}
