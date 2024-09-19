#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum_even=0,sum_odd=0,total_sum=0;
    printf("enter the number=");
    scanf("%d",&n);
     if(n%2==0)
        {
            printf("the even number=%d",sum_even);
        }
        else
            printf("the odd  number=%d",sum_odd);

    for(i=n;i<1000;i+2)
    {

        sum_even+=i;
        sum_odd+=i;
    }
    total_sum=sum_even+sum_odd;
    printf("sum of even=%d sum of odd=%d total sum=%d",sum_even,sum_odd,total_sum);
    return 0;
}
