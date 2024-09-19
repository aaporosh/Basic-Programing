#include<stdio.h>
int sum(int a)
{
    if(a==0)
    {
        return;
    }
    return a+sum(a-1);
}
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("the sum is : %d",sum(n));
}
