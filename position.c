#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the array size : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter the a[%d] index value : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==3)
        {
          break;
        }
        if(a[i]==4)
        {
           break;
        }
    }
     printf("the position is : %d\n",a[i]);
     for(i=0;i<n;i++)
    {
         if(a[i]==4)
        {
           break;
        }
    }
     printf("the position is : %d",a[i]);
    return 0;
}
