#include<stdio.h>
int main()
{
    int i,j,row,col;
    printf("Enter the row and col size : ");
    scanf("%d %d",&row,&col);
    int a[row][col],b[row][col],c[10][10];
    printf("Enter the value of matrix A : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("The Value of a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the value of matrix B : \n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("The Value of b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix A is : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B is : \n");
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
            c[i][j]=a[i][j]-b[i][j];
        }

    }
    printf("The sud of a and b matrix is : \n");
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
