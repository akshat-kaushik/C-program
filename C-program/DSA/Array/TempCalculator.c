#include<stdio.h>

const int city = 2 ;
const int weak = 7 ;
int main()
{
    int temp[city][weak];
    int i=0 , j=0 ;

    while (i<city)
    {
        while(j<weak)
        {
            printf("ENTER CITY %d DAY %d\n", i+1 , j+1);
            scanf("%d", &temp[i][j]);
            j++;
        }
        j = 0 ;
        i++;
    }

    for (i=0;i<city;i++)
    {
        for (j=0;j<weak;j++)
        {
            printf("CITY :%d\n",i+1);
            printf("DAY :%d\n",j+1);
            printf("temperture :%d\n", temp[i][j]);
        }
    }

    return 0;
}