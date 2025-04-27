/*
*********
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
    for (i=1;i<=2*n+1;i++)
    {
        printf("*");
    } 
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            if(j==1)
            {
                printf("*");
                if(n<=4)
                {
                    for (k=p;k<=n;k++)
                    {
                        printf(" ");
                    }
                }
                else if(n%2==0)
                {
                    for (k=p;k<=n+2;k++)
                    {
                        printf(" ");
                    }
                }
                else
                {
                    for (k=p;k<=n+1;k++)
                    {
                        printf(" ");
                    }
                }
            }
            if(j==i)
            {
                if(i==n)
                {
                    break;
                }
                printf("*");
            }
        }
        p=p+2;
        printf("\n");
    }
    return 0 ;
}
/*
***************
 *           * 
  *         *
   *       *
    *     *
     *   *
      * *
       *
*/