#include<stdio.h>
#include<string.h>
int main(){
   char s[100];
   int count[256] ={0};
    gets(s);
    int n= strlen(s);
    for(int i=0;s[i];i++){
            char c=s[i];
            count[c]++;
    }
    for(int j=0;j<256;j++){
        if(count[j]>0){
            printf("%c = %d\n",j,count[j]);
        }
    }
    printf("%d",n);
}
