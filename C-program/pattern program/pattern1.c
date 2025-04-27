/* 
****
****
****
****
*/
#include<stdio.h>
int main ()
{
    int n=5, i , j ;
    //printf("enter n");
    //scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}