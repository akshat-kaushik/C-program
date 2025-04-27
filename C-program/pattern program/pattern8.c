/*
    1
   212
  32123
 4321234
543212345
 4321234
  32123
   212
    1
*/
#include<stdio.h>
int main ()
{
    int n=5 , i , j , k;
    for (i=1;i<=(2*n-1);i++)
    {
        if (i<=n)
        {
        for (k=i;k<=n-1;k++)
        {
            printf("\t");
        }
        for (j=i;j>=1;j--)
        {
            printf("%d",j);
            printf("\t");
        }
        for (j=2;j<=i;j++)
        {
            printf("%d",j);
            printf("\t");
        }
        } 
        else 
        {
            for (k=n;k<=i-1;k++)
            {
                printf("\t");
            }
            for (j=n;j>=1;j--)
            {
                printf("%d",j);
                printf("\t");
            }
            
        }
        printf("\n");
    }
    return 0;
}