#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of number=");
    scanf("%d",&x);
    if(x%2==1)
    {
        printf("this is odd number ");
    }
    else
        printf("this is not odd number");
    return 0;
}
