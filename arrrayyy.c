#include<stdio.h>
int main()
{
    int i,j,n,a[100],max=0,min=0,equal=0;
    printf("enter the number  of student : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<n;j++)
    {

       if(equal==a[j])
        {
        equal++;
        }
    }
    printf("the number %d\n : %d",a[j],equal);

    return 0;

}
