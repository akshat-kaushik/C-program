/*
    *
   * *
  *   *
 *     *
*********
*/
#include<stdio.h>
int main ()
{
    int i , j , k , n;
    printf("enter n");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
        for (k=n;k>=i;k--)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            {
                printf("*");
                for (k=1;k<=2*i-3;k++)
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    for (i=1;i<=2*n+1;i++)
    {
        printf("*");
    }
    return 0 ;
}