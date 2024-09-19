#include<stdio.h>
float convert(float deg)
{
    return deg*(9.0/5.0)+32;
}
int main()
{
    float d,far;
    scanf("%f",&d);
    printf("the coversion is %.2f",convert(d));

}
