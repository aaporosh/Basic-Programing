#include<stdio.h>
int main()
{
    char n;
    printf("enter the charecter:");
    scanf("%c",&n);
    if(n>='a' && n<='z')
    {
        printf("the alphabet");
    }
    else if(n>='A' && n<='Z')
    {
        printf("the alphabet");
    }
   /* else if(n>='0' && n<='9')
    {
        printf("the digit is:%c",n);
    }*/
    else
        printf("ti is not alphabet");
    return 0;

}
