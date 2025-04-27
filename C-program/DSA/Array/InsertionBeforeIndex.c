#include<stdio.h>
#include<stdlib.h>
#define MAX 100

void InsertionBeforeIndex(int newele , int arr[] , int size);

int main()
{
    int n , arr[MAX] , newval ;
    printf("ENTER NUMBER OF ELEMENTS YOU WANT IN YOUR ARRAY\n");
    scanf("%d",&n);

    if (n>=MAX)
    {
        printf("SORRY , ARRAY IS FULL\n");
        return 0;
    }

    printf("ENTER ELEMENTS OF ARRAY\n");
    for (int i=0 ; i<n ; i++)
    {
        printf("ARRAY[%d] : " , i);
        scanf("%d",&arr[i]);
    }

    printf("ENTER NEW VALUE\n");
    scanf("%d",&newval);
    InsertionBeforeIndex(newval,arr,n);

    return 0;
}

void InsertionBeforeIndex(int newele , int arr[] , int size)
{
    int i , k ;
    printf("ENTER POSITION AFTER WHICH DO YOU WANT TO ENTER NEW VALUE \n");
    scanf("%d",&k);

    for (i=size-1 ; i>=k-1 ; i--)
    {
        arr[i+1] = arr[i];
    }

    arr[k-1] = newele ;

    for (i=0 ; i<=size ; i++)
    {
        printf("ARRAY[%d] :%d\n", i , arr[i]);
    }
}