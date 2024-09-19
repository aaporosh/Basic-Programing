#include<stdio.h>

int main(){

    int M,j,i,count,N;
    printf("Enter max range: ");
    scanf("%d %d",&M,&N);

    for(j= M;j<=N;j++){
            count = 0;

         for(i=2;i<=j/2;i++){
             if(j%i==0){
                 count++;
                 break;
             }
        }

         if(count==0 && j!= 1)
             printf("%d ",j);
    }
    return 0;
}
