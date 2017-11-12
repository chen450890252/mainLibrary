package com.example.lenovo.myapplication;

import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.support.v4.app.NotificationCompat;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class SecondActivity extends AppCompatActivity implements View.OnClickListener {

    Button button3;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_second);
        sendNotification();
        button3 = (Button)findViewById(R.id.button3);
        button3.setOnClickListener(this);

    }

    @Override
    public void onClick(View view) {
        sendNotification();
    }
    private void sendNotification()
    {
        NotificationManager notifyManager = (NotificationManager)getSystemService(Context.NOTIFICATION_SERVICE);
        NotificationCompat.Builder builder = new NotificationCompat.Builder(this)
                .setSmallIcon(R.mipmap.ic_launcher)
                .setContentTitle("啥都没有")
                .setContentText("只有空白");
        notifyManager.notify(1,builder.build());
    }
}
