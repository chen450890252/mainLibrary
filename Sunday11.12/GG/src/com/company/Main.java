package com.company;

import java.io.*;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;

public class Main {
    static int i = 0;
    final static String inblacklistPath = "C:/Users/lenovo/Desktop/blacklist.txt";
    final static String outblackllistPath = "C:/Users/lenovo/Desktop/newblacklist.txt";
    public static void main(String[] args)
    {
        try (Reader rBlacklist = new FileReader(inblacklistPath);
             BufferedReader bBlacklist = new BufferedReader(rBlacklist);
             OutputStream outputStream = new FileOutputStream(outblackllistPath);
             Writer wBlacklist = new OutputStreamWriter(outputStream,"iso-8859-1");
             BufferedWriter bwBlacklist = new BufferedWriter(wBlacklist))
        {
            ArrayList<String> blacklist = new ArrayList<>();
            String line = null;
            while ((line = bBlacklist.readLine()) != null)
            {
                blacklist.add(line);
                //blacklist.add("\n");
            }
            removeDuplicate(blacklist);//去除重复
            //System.out.println(blacklist.toString());
            String[] sBlacklist = new String[blacklist.size()];
            blacklist.toArray(sBlacklist);
            blacklist.clear();
            Arrays.sort(sBlacklist,new LengthComparator());
            for (String a : sBlacklist)
            {
                blacklist.add(a + "\n");
            }
            for(String a: blacklist)
            {
                bwBlacklist.write(a);
            }
            for(String a:blacklist)
            {
                System.out.print(a);
            }
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static void removeDuplicate(List list)
    {
        HashSet h = new HashSet(list);
        list.clear();
        list.addAll(h);
    }
}
