#include<stdio.h>

int main ()
{
    int i=0 , n , sum=0 , marks[n];
    float avg ;
    printf("ENTER NUMBER OF ELEMENTS :");
    scanf("%d",&n);
    while (i<n)
    {
        scanf("%d",&marks[i]);
        sum += marks[i];// sum = sum + marks[i]
        i++ ; 
    }
    avg = (float)sum / n ;
    printf("AVERAGE :%.2f", avg);
    return 0;
}