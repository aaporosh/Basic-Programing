#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the array number : ");
    scanf("%d",&n);
    int a[n];
    int min=a[0],max=a[0];
    for(i=0;i<n;i++)
    {
        printf("enter the a[%d] index value : ",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
     printf("the max number is : %d",max);
     for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("the min number is : %d",min);
    return 0;
}
