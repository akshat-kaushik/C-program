#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data ;
    struct node *next ;
}node;

typedef struct mode 
{
    node *front ;
    node *rear ;
}queue;

void enqueue(queue *s , int val);
void dequeue(queue *s);
void print(queue *s);

int main ()
{
    queue *q = NULL ;
    q = (queue*) malloc(sizeof(queue));
    q->front = NULL ;
    q->rear = NULL ;
    for(int i=1 ; i<=10 ; i++)
    {
        enqueue(q,i);
    }
    dequeue(q);
    enqueue(q,100);
    print(q);
    free(q);
    return 0 ;
}

void enqueue(queue *s , int val)
{
    node *new = NULL ;
    new = (node*) malloc(sizeof(node));
    if(new==NULL)
    {
        printf("QUEUE OVERFLOW\n");
        return ;
    }
    new->data = val ;
    new->next = NULL ;
    if(s->front==NULL)
    {
        s->front = new ;
        s->rear = new ;
        s->front->next = NULL ;
        s->rear->next = NULL ;
    }
    else
    {
        s->rear->next = new ;
        s->rear = new ;
    }
}

void dequeue(queue *s)
{
    if(s->front==NULL)
    {
        printf("QUEUE UNDERFLOW\n");
        return ;
    }
    node *temp = NULL ;
    temp = (node*) malloc(sizeof(node));
    temp = s->front ;
    s->front = s->front->next ;
    free(temp) ;
}

void print(queue *s)
{
    if(s->front==NULL)
    {
        printf("SORRY , LOOK'S LIKE WE DON'T HAVE ANY ELEMENT PRESENT IN THE LIST\n");
        return ;
    }
    printf("\n\n");
    while(s->front!=NULL)
    {
        printf("%d=",s->front->data);
        s->front = s->front->next ;
    }
    printf("NULL\n");
}