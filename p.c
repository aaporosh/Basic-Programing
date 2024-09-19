#include<stdio.h>
int main()
{
    int a=2,b=9,c=8,d=7,e=6;
    d+=c+(++b/a)*e%8-d/3;
    printf("%d\n",d);
    e*=a!=b?(c*d)/e:(e*d)%b;
    printf("%d",e);
}
