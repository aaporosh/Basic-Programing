#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=100;i++)
    {
        if(i%7!=0 && i%5!=0)
        {
            sum+=i;
            printf("%d\n",i);
        }

    }
     printf("%d",sum);
    return 0;
}
