#include<stdio.h>

int main ()
{
    int n = 5 , arr[n] ;
    printf("ENTER ELEMENTS OF ARRAY\n");
    for (int i=0 ; i<n ; i++)
    {
        printf("Array[%d] : ", i);
        scanf("%d",&arr[i]);
        printf("\n");
    }
    printf("ELEMENTS OF ARRAY\n");
    for(int i=0 ; i<n ; i++)
    {
        printf("Array[%d] :%d\n", i , arr[i]);
    }
    return 0;
}