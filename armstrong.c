#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i,temp,r;
    printf("enter the limit : \n");
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
       int k=0,count=0;
       temp=i;
       while(temp>0)
       {
           temp=temp/10;
           count++;
       }
       temp=i;
       while(temp>0)
       {
           r=temp%10;
           k=k+pow(r,count);
           temp=temp/10;
       }
       if(k==i)
        printf("%d ",i);
    }
}
