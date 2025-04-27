/*
*
**
***
****
*****
****
***
**
*
*/
#include<stdio.h>
int main ()
{
    int n , i , j , k , t ;
    printf("enter n");
    scanf("%d",&n);
    t = (2*n-1);
    for (i=1;i<=t;i++)
    {
        if(i<=n)
        {
            for (j=1;j<=i;j++)
            {
                printf("*");
            }
        }
        else 
        {
            for (k=i;k<=t;k++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}