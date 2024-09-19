#include<stdio.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    printf("The string is : ");
    puts(str);
    return 0;
}
