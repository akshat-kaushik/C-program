#include<stdio.h>
#define MAX 100

void DeletionAtBeginning(int arr[] , int size);

int main ()
{
    int n , arr[MAX] ;
    label:
    {
        printf("ENTER SIZE OF ARRAY\n");
        scanf("%d",&n);
    }
    if(n>=MAX)
    {
        printf("Sorry Size is too large\n");
        goto label ;
    }
    else
    {
        for(int i=0 ; i<=n ; i++)
        {
            printf("Array[%d]:", i);
            scanf("%d",&arr[i]);
        }
    }

    DeletionAtBeginning(arr,n);

    return 0;
}

void DeletionAtBeginning(int arr[] , int size)
{
    int i ;

    for (i=0 ; i<size ; i++)
    {
        arr[i] = arr[i+1];
    }

    size--;
    printf("ARRAY AFTER DELETION\n");
    for(i=0 ; i<=size ; i++)
    {
        printf("Array[%d]:%d\n", i , arr[i]);
    }
}