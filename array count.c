#include<stdio.h>
int main()
{
    int i,n,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,x=0,j=0 ;
    printf("Enter Array Size=");
    scanf("%d",&n);
    int arr[n] ;
    printf("Enter %d value\n",n);
    for(i=0; i<n; i++)
    {
        printf("Enter a[%d] index value=",i);
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        if(arr[i]==1)
            a++;
        else if(arr[i]==2)
            b++;
        else if(arr[i]==3)
            c++;
        else if(arr[i]==4)
            d++;
        else if(arr[i]==5)
            e++;
        else if(arr[i]==6)
            f++;
        else if(arr[i]==7)
            g++;
        else if(arr[i]==8)
            h++;
        else if(arr[i]==9)
            x++;
    }
    if(a!=0)
        printf("1 =%d\n",a);
    if(b!=0)
        printf("2 =%d\n",b);
    if(c!=0)
        printf("3 =%d\n",c);
    if(d!=0)
        printf("4 =%d\n",d);
    if(e!=0)
        printf("5 =%d\n",e);
    if(f!=0)
        printf("6 =%d\n",f);
    if(g!=0)
        printf("7 =%d\n",g);
    if(h!=0)
        printf("8 =%d\n",h);
    if(x!=0)
        printf("9 =%d\n",x);

    return 0;
}
