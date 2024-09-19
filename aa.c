#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=7;j=j+2)
        {
            printf("%d,",j);
        }
        printf("\n");
    }
}
