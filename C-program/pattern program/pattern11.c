/*
* * * * * 
 * * * * 
  * * * 
   * *
    *
    * 
   * *
  * * *
 * * * *
* * * * *
*/
#include<stdio.h>
int main ()
{
    int i , j , k , n ;
    printf("enter n");
    scanf("%d",&n);
    for (i=1;i<=2*n;i++)
    {
        if (i<=n)
        {
            for (k=2;k<=i;k++)
            {
                printf(" ");
            }
            for (j=n;j>=i;j--)
            {
                printf("*");
                printf(" ");
            }
        }
        else
        {
            for (k=i;k<=2*n-1;k++)
            {
                printf(" ");
            }
            for (j=n+1;j<=i;j++)
            {
                printf("*");
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0 ;
}