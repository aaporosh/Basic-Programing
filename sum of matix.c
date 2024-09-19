#include<stdio.h>
int main()
{
    int i,j,row,col;
    printf("enter the array size : ");
    scanf("%d %d",&row,&col);
    int a[row][col] ,b[row][col] ,c[10][10];

    printf("Enter the elements of matrix A : \n");

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
    printf("Enter the  elements of matrix B : \n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter b[%d][%d] value : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("the addition of matrix : \n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           printf("%d\t",c[i][j]);
        }
        printf("\n");
    }


    return 0;

}

