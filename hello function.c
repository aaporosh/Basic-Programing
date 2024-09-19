#include<stdio.h>

void hello(int count)
{
    if(count==0)
    {
        return;
    }
   printf("helllo world\n");
   hello(count-1);
}
int main()
{
    int count;
    scanf("%d",&count);
    hello(count);
    return 0;
}
