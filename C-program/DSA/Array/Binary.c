#include<stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6};
    int low=0 , mid , high=5 , x=5 , i ;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==x)
        {
            printf("MID");
            break ;
        }
        else if(x>arr[mid])
        {
            low = mid+1 ;
            
        }
        else{
            high = mid-1 ;
            
        }
    }

    return 0 ;
}