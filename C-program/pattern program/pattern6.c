/*
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/
#include<stdio.h>
int main ()
{
    int n , i , j , k ;
    printf("enter n");
    scanf("%d",&n);
    for (i=1;i<=(2*n-1);i++)
    {
        if (i<=n)
        {
        for (k=i;k<=n-1;k++)
        {
            printf("\t");
        }
        for (j=1;j<=i;j++)
        {
            printf("*");
            printf("\t");
            printf("\t");
        }
        }
        else
        {
        for (k=n;k<=i-1;k++)
        {
            printf("\t");
        }
        for (j=i;j<=(2*n-1);j++)
        {
            printf("*");
            printf("\t");
            printf("\t");
        }
        }
        printf("\n");
    }
    return 0;
}