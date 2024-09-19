#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of number=\n");
    scanf("%d %d %d",&a,&b, &c);
    if(a>b && a>c)
    {
        printf("the max number=%d",a);
    }
    else if(b>c)
    {
        printf("the max number is=%d",b);
    }
    else
        printf("the max number is=%d",c);
    return 0;
}
