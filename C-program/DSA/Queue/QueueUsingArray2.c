#include<stdio.h>
#include<stdlib.h>
#define MAX 10

struct node
{
    int item[MAX] ;
    int front ; 
    int rear ; 
};
typedef struct node queue ;

void enqueue(queue *arr , int val);
void dequeue(queue *arr);
void print(queue *arr);

int main ()
{
    queue *s = NULL ;
    s = (queue*) malloc(sizeof(queue));
    s->front = -1 ;
    s->rear = -1 ;
    for(int i=0 ; i<10 ; i++)
    {
        enqueue(s,i+1);
    }
    enqueue(s,100);
    enqueue(s,200);
    dequeue(s);
    print(s);
    free(s);
    return 0 ;
}

void enqueue(queue *arr , int val)
{
    if(arr->rear==MAX-1)
    {
        printf("QUEUE OVERFLOW\n");
        return ;
    }
    if(arr->front==-1)
    {
        arr->front++ ;
    }
    arr->rear++ ;
    arr->item[arr->rear] = val ;
}

void dequeue(queue *arr)
{
    if(arr->front==-1 || arr->front>arr->rear)
    {
        printf("QUEUE UNDERFLOW\n");
        return ;
    }
    printf("DELETED ITEM:%d\n",arr->item[arr->front]);
    arr->front++ ;
    if(arr->front>arr->rear)
    {
        arr->front = -1 ;
        arr->rear = -1 ;
    }
}

void print(queue *arr)
{
    if(arr->front==-1)
    {
        printf("SORRY , LOOK'S LIKE WE DON'T HAVE ANY ITEM IN THE QUEUE\n");
        return ;
    }
    printf("\n\n");
    for(int k=arr->front ; k<=arr->rear ; k++)
    {
        printf("%d=",arr->item[k]);
    }
    printf("\n\n");
}