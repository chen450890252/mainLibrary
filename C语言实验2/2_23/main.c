#include <stdio.h>
#define N 100

/*
整数划分问题，指把一个正整数n写成若干个大于等于1且
小于等于其本身的整数的和，则其中各加数所构成的集合
为n的一个划分。例如，当n=4时，有5个划分，即{4}，{3,1}
,{2,2},{2,1,1},{1,1,1,1}。注意4=3+1和4=1+3被认为是同
一个划分。要求用递归来解决该问题。*/

int a[N];
int t = 0;//t作为数组a[]的下标
int total = 0;
int count = 0;//划分数的计数器
void part(int x,int n)
{
    int i,j;
    for(i = x;i >= 1;i--)
        if(i + total <= n)
        {
            a[t++] = i;  //将n的划分由大到小给数组a[]
            total += i;//total的值逐渐向n靠拢，当n==total时就是打印的时候
            part(i,n);  //递归调用，直到满足n==total
        }
    if(total == n)//等式两边n=total时打印
    {
        count++;   //计数，每打印一次增1，最终结果即为划分数
        printf("%d=",n);//打印等式左边的n及=
        for(j = 0;j < t;j++)
        {
            printf("%d",a[j]);//依次输出a[0],a[1],a[2].....
            if(j < t-1) printf("+");//如果a[j]不是最后一个加数，那么打印+号
            else
            {
                if(a[1] == 1 || a[0] == n) printf("\n");//唯有n=n或者a[1]为1，即除a[0]以外都为1的情况，进行下一行输出
                else printf(" ");//同行等式间分割号
            }
        }
    }
    t--;//回到上一步t值
    total -= a[t];//回到上一步total值

}
void main()
{
    int n;
    printf("输入是n:");
    scanf("%d",&n);
    part(n,n);// 将n划分成若干正整数之和的划分数。
    printf("将%d划分成若干正整数之和的划分数:%d\n\n",n,count);
}
