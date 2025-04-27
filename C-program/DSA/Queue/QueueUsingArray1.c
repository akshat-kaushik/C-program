#include<stdio.h>
#include<stdlib.h>
#define MAX 10 

int queue[MAX];
int rear = -1 ;
int front = -1 ;

void enqueue();
void dequeue();
void print();

int main()
{
    int i=0 ;
    while(i<10)
    {
        enqueue();
        i++ ;
    }
    dequeue();
    print();
    return 0 ;
}

void enqueue()
{
    if(rear==MAX-1)
    {
        printf("QUEUE OVERFLOW\n");
        return ;
    }
    int add ;
    if(front==-1)
    {
        front = 0 ;
    }
    printf("ENTER ELEMENT\n");
    scanf("%d",&add);
    rear++ ;
    queue[rear] = add ;
}

void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("QUEUE UNDERFLOW\n");
        return ;
    }
    printf("DELETED ELEMENT:%d\n",queue[front]);
    front++ ;
    if(front>rear)
    {
        front = -1 ;
        rear = -1 ;
    }
}

void print()
{
    if(front==-1)
    {
        printf("NO ELEMENT IS PRESENT IN THE QUEUE\n");
        return ;
    }
    for(int i=front ; i<=rear ; i++)
    {
        printf("%d-",queue[i]);
    }
    printf("\n\n");
}