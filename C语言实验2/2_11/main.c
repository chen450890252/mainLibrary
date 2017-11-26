#include <stdio.h>

/*折半查找法*/

int find(int a[],int x,int n,int m)
{
    int i;
    if(n>m)
        return -1;
    i=(n+m)/2;
    if(a[i]==x)
        return i;
    if(a[i]>x)
        return find(a,x,n,i-1);
    return find(a,x,i+1,m);
}
int main()
{
    int a[20]={2,3,6,7,12,18,19,21,25,28,30,33,37,39,42,45,47,49,50,51};
    int x,i;
    printf("已有的数是：\n");
    for(i=0;i<20;i++)
        printf("%d ",a[i]);
    printf("\n请输入要查找的数：");
    scanf("%d",&x);
    if((i=find(a,x,0,19))>=0)
        printf("%d是第%d个数\n",x,i+1);
    else
        printf("未找到%d\n",x);
    return 0;
}
