#include<stdio.h>
int main(){
    double a;
    scanf("%f",&a);
    int b = a/100;
    printf("%d notas in %d",b,a);

    int c = int(a) % 100;
    int d= c/50;

}