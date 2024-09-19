#include<stdio.h>
int main()
{
    int i,j,t,n,m;
    printf("enter the array size : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter the value of a[%d] is : ",i);
        scanf("%d",&a[i]);
    }
    printf("enter the array size : ");
    scanf("%d",&m);
    int b[j];
    for(j=0;j<m;j++)
    {
         printf("enter the value of b[%d] is : ",j);
         scanf("%d",&b[j]);
    }
     for(j=0;j<m;j++)
    {
        if(b[j]==1)
        {
              for(i=j;i<n;i++)
        {
            if(a[i]%3==0)
            {
                t++;
            }
        }
        }

    }



    printf("%d",t);

}
