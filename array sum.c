#include<stdio.h>
int main()
{
    int n,i,j,sum=0,a[100];
    float avg;
    printf("enter the value : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
      sum=sum+a[j];
    }
        printf("the sum : %d",sum);

    return 0;
}
