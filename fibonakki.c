#include<stdio.h>
int main()
{
    int a=0,b=1,f,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=a+b;
        printf("%d ",f);
        a=b;
        b=f;
    }
}
