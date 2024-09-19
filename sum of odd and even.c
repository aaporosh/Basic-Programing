#include<stdio.h>
int main()
{
    int N,M,i,sum_even=0,sum_odd=0;
    printf("enter the value : ");
    scanf("%d %d",&M,&N);
    for(i=M;i<=N;i++)
    {
        if(i%2==0)
        {
            sum_even=sum_even+i;
        }
    }
    for(i=M;i<=N;i++)
    {
        if(i%2==1)
        {
            sum_odd=sum_odd+i;
        }
    }
    printf("summation of even number : %d\nsummation of odd number : %d",sum_even,sum_odd);
    return 0;
}
