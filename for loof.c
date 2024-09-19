#include<stdio.h>
int main()
{
    int i,n,m,
    sum=0;
    printf("enter the value=\n");
    scanf("%d %d",&n,&m);
    for(i=n;i<=m;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
