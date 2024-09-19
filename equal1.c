#include<stdio.h>

int main()
{
int i,n,j,k=0,a[100],count=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(k=0;k<n;k++)
{
for(j=0;j<n;j++)
{
if(a[k]==a[j])
{count++;
continue;}
}
{printf("%d = %d\n",a[k],count);}
count=0;
}
    return 0;
}
