/*
****
***
**
*
*/
#include<stdio.h>
void method1(int n);
void method2(int n);
int main ()
{
    int n ; 
    printf("enter n");
    scanf("%d",&n);
    method1(n);
    method2(n);
    return 0 ;
}
void method1(int n)
{
    int i , j ;
    for (i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void method2(int n)
{
    int i , j ;
    for (i=1;i<=n;i++)
    {
        for (j=n;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}