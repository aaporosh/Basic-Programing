#include<stdio.h>
int main()
{
    int i,my,n,more=0,less=0 ;
    printf("Enter Array Size=");
    scanf("%d",&n);
    int a[n] ;
    printf("Enter %d value\n",n);
    for(i=0; i<n; i++)
    {
        printf("Enter a[%d] index value=",i);
        scanf("%d",&a[i]);
    }
    my=a[0] ;
    for(i=0; i<n; i++)
    {
        if(a[i]>my)
            more++;
        if(a[i]<my)
            less++;
    }
    printf("Number of friends that got less than me =%d\n",less);
    printf("Number of friends that got more than me =%d\n",more);

    return 0;
}
