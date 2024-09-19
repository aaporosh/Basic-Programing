#include<stdio.h>
int main()
{
        int i,n,sum=0,even=0,odd=0,max=0,min=0;
        printf("enter the array number : ");
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            printf(" Enter the array a[%d] index number  :  ",i);
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
          /* if(a[i]%2==0)
           {
               even++;
           } else
           {
               odd++;
           } */
           if(a[0]<a[i])
           {
               max++;
           }
           else if(a[0]>a[i])
           {
               min++;
           }

        }
       // printf("the total sum is : %d",sum);
       //printf("the total even number is : %d\n the total odd number is : %d",even,odd);
       printf("the total max value is : %d \n the total min value is : %d",max,min);
        return 0;
}
