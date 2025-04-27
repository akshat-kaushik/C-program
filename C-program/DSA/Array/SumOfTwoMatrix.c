#include<stdio.h>

int main()
{
    int a[2][2] , b[2][2] , c[2][2] ;
    int i , j ;
    // a matrix elements 
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("ENTER ELEMENT ON ROW :%d COLUMN :%d OF MATRIX A\n", i+1 , j+1);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    // b matrix elements
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("ENTER ELEMENT ON ROW :%d COLUMN :%d OF MATRIX B\n", i+1 , j+1);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    // c matrix for result
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("RESULT :%d\n",c[i][j]);
        }
    }
    return 0;
}