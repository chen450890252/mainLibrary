#include <stdio.h>
#define N 17              //人数
#define M 11              //出局人号码

/*约瑟夫环问题的具体描述是：设有编号为1,2，……，n的n个（n>0）个人围成一个圈，
从第1个人开始报数，报到m时停止报数，报m的人出圈，才从他的下一个人起重新报
数，报到m时停止报数，报m的出圈，……，如此下去，知道剩余1个人为止。当任意给
定n和m后，设计算法求n个人出圈的次序。*/

int main()
{
    int n,m,i,call_n = 0,out_n = 0;
    printf("多少人围圈？\n");
    scanf("%d",&n);
    printf("每次要第几个人出去？\n");
    scanf("%d",&m);
    int a[n];
    for (i = 0; i < n; i++)
        a[i] = 0;
    i = 0;
    while (1)                           //循环报数
    {
      if(a[i] == 0)                     //如果健在
      {
        if (out_n == (n - 1))
            break;                      //如果仅剩一人
        call_n++;                       //报数
        call_n %= m;                    //最大为M，到了M就从0开始
        if(call_n == 0)
        {
          a[i] = 1;                     //出局标记
          out_n++;
          printf("%d  ", i + 1);        //显示出局人号码
        }
      }
      i++;
      i %= n;                           //循环转向下一人
    }
    printf("\n最后剩余者的编号是：%d\n", i + 1);

}
