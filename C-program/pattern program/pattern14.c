/*
    *
   * *
  *   *
 *     *
*       * 
 *     *
  *   * 
   * * 
    *
*/
#include<stdio.h>

int main ()
{
    int i , j , k , p=0 , n;
    printf("enter n");
    scanf("%d", &n);
    for (i=1;i<=2*n-1;i++)
    {
        if (i<=n)
        {
            for (k=i;k<=n-1;k++)
            {
                printf(" ");
            }
            for (j=1;j<=i;j++)
            {
                if (j==1 || j==i)
                {
                    printf("*");
                    for(k=1;k<=2*i-3;k++)
                    {
                        printf(" ");
                    }
                }
            }
        }
        else 
        {
            for (k=i;k>=n+1;k--)
            {
                printf(" ");
            }
            for (j=1;j<=i;j++)
            {
                if(j==1)
                {
                    printf("*");
                    for (k=p;k<=n-1;k++)
                    {
                        printf(" ");
                    }
                }
                if(j==i)
                {
                    if(j==2*n-1)
                    {
                        break;
                    }
                    printf("*");
                }
            }
            p=p+2;
        }
        printf("\n");
    }
    return 0;
}