#include<stdio.h>
int main()
{
    char n;
    printf("enter the charecter:");
    scanf("%c",&n);
    if(n>='a' && n<='z' || n>='A' && n<='Z')
    {
        if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u')
        {
            printf(" the vowel is:%c",n);
        }
        else if(n=='A' || n=='E' || n=='I' || n=='O' || n=='U')
        {
            printf("the vawel is:%c",n);
        }
        else
            printf("the consonent is:%c",n);
    }
    else
        printf("wrong input");
    return 0;
}
