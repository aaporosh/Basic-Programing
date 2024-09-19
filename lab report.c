#include<stdio.h>
int main()
{
    char n;
    printf("enter the case : ");
   scanf("%c",&n);
   if(n>='a' && n<='z' )
   {
       printf("lower case");
   }
   else if(n>='A' && n<='Z')
   {
       printf("Upper case");
   }
   else
    printf("special char");
   return 0;
}
