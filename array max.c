#include<stdio.h>
int main()
{
    int i,j,n,a[100];
    printf("enter the value : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];

    for(j=1;j<n;j++)
    {
        if(max<a[j])
        {
            max=a[j];
        }
    }
    printf("the maximum number is : %d",max);
     for(j=1;j<n;j++)
    {
        if(min>a[j])
        {
            min=a[j];
        }
    }
    printf("\nthe minimam number is : %d",min);
    return 0;
}
