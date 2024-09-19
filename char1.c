#include<stdio.h>
int main()
{
    char n;
    printf("enter the letter=");
    scanf("%c",&n);
    if(n>='a' && n<='z')
    {
        printf("this is the small letter");
    }
    else if(n>='A' && n<='Z')
    {
        printf("this is the large letter");
    }
    else if(n>='0' && n<='9')
    {
        printf("this is a  digit");
    }
    else
        printf("this is special leter");
    return 0;
}
