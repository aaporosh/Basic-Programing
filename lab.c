#include<stdio.h>
int main()
{
    int n;
    printf("enter the value : ");
    scanf("%d",&n);
    if(n%3==0 && n%4==0)
    {
        printf("number is divisible by 3 and 4");
    }
    else
        printf("number is not divisible by 3 and 4");
    return 0;
}
