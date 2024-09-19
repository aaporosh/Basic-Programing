#include<stdio.h>
int main()
{
    int n;
    printf("enter the year:");
    scanf("%d",&n);
    if(n%400==0)
    {
        printf("leap year is %d",n);
    }
    else if(n%4==0 && n&100!=0)
    {
        printf("leap year is %d",n);
    }
    else
        printf("%d is not leap year",n);
    return 0;
}
