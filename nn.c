#include<stdio.h>
int main()
{
    char ch;
    printf("enter charector:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("%c is a capital letter",ch);
     else if(ch>='a' && ch<='z')
        printf("%c is a small letter",ch);
    else
        printf("%C is a number");
    return 0;
}
