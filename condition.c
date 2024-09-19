#include<stdio.h>
int main()
{
    int mark;
    printf("Enter the mark=");
    scanf("%d",&mark);
    if(mark>=90)
    {
        printf("Grade=A+");
    }
    else if(mark>=80 && mark<90)
    {
        printf("Grade=A");
    }
    else if(mark>=70 && mark<80)
    {
        printf("Grade=A-");
    }
    else if(mark>=60 && mark<70)
    {
        printf("Grade=B");
    }
    else
        printf("Best of luck try next time");
    return 0;
}
