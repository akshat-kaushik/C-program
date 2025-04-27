#include<stdio.h>
#include<stdlib.h>
#define MAX 100

void Insertion1(int newele , int arr[] , int size);
void Insertion2(int newele , int arr[] , int size);

int main ()
{
    int n , arr[MAX] , newval ;

    printf("ENTER NUMBER OF ELEMENTS\n");
    scanf("%d",&n);
    printf("ENTER ELEMENTS OF ARRAY\n");

    if(n>=MAX)
    {
        printf("ARRAY IS FULL NO SPACE LEFT\n");
        return 0;
    }

    for(int i=0 ; i<n ; i++)
    {
        printf("Array[%d] : ",i);
        scanf("%d",&arr[i]);   
    }
    
    printf("ENTER NEW VALUE YOU WANT TO ENTER \n");
    scanf("%d",&newval);
    // DO NOT CALL BOTH FUNTION TOGETHER IT WILL GIVE YOU WRONG OUTPUT
    Insertion1(newval,arr,n);//THIS FUNTION IS THE NORMAL ALGORITHM
    //Insertion2(newval,arr,n);//THIS FUNTION IS THE NEW ALGORITHM MADE BY ME

    return 0;
}

void Insertion1(int newele , int arr[] , int size)
{
    int i ;
    for (i=size ; i>=0 ; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = newele ;
    size++;
    for (i=0 ; i<size; i++)
    {
        printf("Array[%d] :%d\n", i , arr[i]);
    }
}

void Insertion2(int newele , int arr[] , int size)
{
    int i ;
    for (i=0 ; i<=size ; i++)
    {
        arr[size+1-i] = arr[size-i];
    }
    arr[0] = newele ;
    for (i=0 ; i<=size ; i++)
    {
        printf("Array[%d] :%d\n",i,arr[i]);
    }
}