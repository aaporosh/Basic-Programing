#include<stdio.h>
int sum(int x,int y)
{
    return x+y;
}
int main()
{
    int a,b,s;
    printf("enter the value : ");
    scanf("%d %d",&a,&b);
    s=sum(a,b);
    printf("sum is : %d",s);
}
