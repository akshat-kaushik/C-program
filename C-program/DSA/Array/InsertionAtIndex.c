#include<stdio.h>
#include<stdlib.h>
#define MAX 100

void InsertionIndex(int newele , int arr[] , int size);

int main ()
{
    int n  , newval , arr[MAX] ;
    
    printf("ENTER NUMBER OF ELEMENTS YOU WANT IN ARRAY :\n");
    scanf("%d",&n);

    if(n>=MAX)
    {
        printf("SORRY , ARRAY IS FULL \n");
        return 0;
    }

    printf("ENTER ELEMENTS IN ARRAY\n");

    for (int i=0 ; i<n ; i++)
    {
        printf("ENTER ARRAY[%d] :\n",i);
        scanf("%d",&arr[i]);
    }
    printf("ENTER NEW VALUE\n");
    scanf("%d",&newval);
    InsertionIndex(newval,arr,n);
    
    return 0;   
}

void InsertionIndex(int newele , int arr[] , int size)
{
    int i , k ;
    printf("ENTER AT WHICH POSITION DO YOU WANT TO ENTER THE NEW VALUE \n");
    scanf("%d",&k);

    for (i=size ; i>=k ; i--)
    {
        arr[i+1] = arr[i];
    }

    arr[k] = newele ;

    for(i=0 ; i<=size ; i++)
    {
        printf("ARRAY[%d] :%d\n", i , arr[i]);
    }
}