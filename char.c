#include<stdio.h>
int main()
{
    char n;
    printf("enter the character=");
    scanf("%c",&n);
    if(n>='a' &&  n<='z' || n>='A' && n<='Z')
    {
        printf("this is a leter:");
    }
    else if(n>='0' && n<='9');
    {
        printf("this is a digit:");
    }
    else
    {
        printf("this is a special character");
    }
    return 0;
}
