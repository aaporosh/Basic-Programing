#include<stdio.h>
int main()
{
    int i,j,temp,n;
    printf("enter the array size : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the a[%d]  index value : ",i);
        scanf("%d",&a[i]);
    }
    printf("the  value before sorting \n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
            }
         }
    }
    printf("\nthe value after sorting\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
        return 0;

}
