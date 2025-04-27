#include<stdio.h>
#define MAX 10

int main ()
{
    int i , n , ele , arr[MAX] = {1,2,3,4,5,6,7,8,9,10} ;
    printf("ENTER NUMBER\n");
    scanf("%d",&ele);

    printf("ENTER POSITION YOU WANT TO REPLACE IT WITH\n");
    scanf("%d",&n);

    arr[n] = ele ;

    for(i=0 ; i<MAX ; i++)
    {
        printf("Array[%d]: %d\n", i , arr[i]);
    }

    return 0;
}