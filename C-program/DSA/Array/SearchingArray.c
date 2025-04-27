#include<stdio.h>
#define MAX 10

int main ()
{
    int i , n , arr[MAX] = {1,2,3,4,5,6,7,8,9,10};
    printf("ENTER NUMBER YOU WANT TO SEARCH\n");
    scanf("%d",&n);

    for (i=0 ; i<MAX ; i++)
    {
        if(arr[i]==n)
        {
            printf("NUMBER SUCCESSFULLY FOUND\n");
            printf("NUMBER: %d \nPOSTION: %d", n , i);
            return 1;
        }
    }
    printf("NUMBER NOT FOUND\n");

    return 0;
}