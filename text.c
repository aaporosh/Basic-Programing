#include<stdio.h>
int main()
{
    int n;
    float hour,d,s;
    printf("Employee's serial number=");
    scanf("%d",&n);
    printf("Works hour per month=");
    scanf("%f",&hour);
    printf("salary per hour= ");
    scanf("%f",&d);
    s=hour*d;
    printf("Employee's serial number=%d \n total salary for this month=%.2f",n,s);
    return 0;
}


