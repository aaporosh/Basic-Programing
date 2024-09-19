#include<stdio.h>
int main()
{
    char s[100];
    printf("enter the string : ");
    gets(s);
    int i=0;
    while(s[i] !='\o')
    {

        i++;
    }
     printf("%c\n",s[i]);

    return 0;
}
