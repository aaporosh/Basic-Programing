#include<stdio.h>
int main()
{
    int N,M,count=0,i;
    scanf("%d %d",&N,&M);
    for(i=N;i<M;i++)
    {
        if(M%i==0)
        {
            count++;
            continue;
        }
        printf("%d",count);
    }
}
