#include<stdio.h>
#include<stdlib.h>
#define MAX 100

void Deletion(int arr[] , int size);

int main ()
{
    int n , arr[MAX] ;
    label:
        printf("ENTER SIZE OF ARRAY\n");
        scanf("%d",&n);

    if(n>=MAX)
    {
        printf("SORRY , SIZE IS TOO LARGE\n");
        goto label ;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Array[%d] :",i);
        scanf("%d",&arr[i]);
    }
    
    Deletion(arr,n);
    return 0;
}

void Deletion(int arr[] , int size)
{
    int del , i ;
    printf("ENTER POSITION OF WORD YOU WANT TO DELETE\n");
    scanf("%d",&del);

    i=del;
    while (i<size)
    {
        arr[i] = arr[i+1];
        i++;
    }

    for(i=0 ; i<size-1 ; i++)
    {
        printf("Array[%d] :%d\n", i , arr[i]);
    }
}