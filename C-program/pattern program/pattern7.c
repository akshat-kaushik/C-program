/*
    1
   212
  32123
 4321234
543212345
*/
#include<stdio.h>
int main ()
{
    int n  , i , j , k ;
    printf("enter n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
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
        printf("\n");
    }
    return 0;
}