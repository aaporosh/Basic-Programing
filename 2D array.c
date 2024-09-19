#include<stdio.h>
int main()
{
    int i,j,row,col;
    printf("enter the array size : ");
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter a[%d][%d] value : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;

}
