#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data ; 
    struct node *next ;
};

void push (struct node **first , int new);
void print(struct node *sec);
int given (struct node **prev , int value);

int main ()
{
    struct node *head ;//= NULL ;
    push(&head,10);
    given(&head,20);
    push(&head,30);
    given(&head,35);
    push(&head,40);
    push(&head,50);
    print(head);
    free(head);
    return 0 ;
}

void push (struct node **first , int new)
{
    struct node *newhead = NULL ;
    newhead = (struct node*) malloc(sizeof(struct node));
    newhead->data = new ;
    newhead->next = *first ;
    *first = newhead ;
}

void print(struct node *sec)
{
    int i;
    for(i=0 ; sec!=NULL ; i++)
    {
        printf("%d->",sec->data);
        sec = sec->next ;
    }
}

int given (struct node **prev , int value)
{
    if(prev==NULL)
    {
        printf("SORRY IT CANNOT CONTAIN NULL VALUE\n");
        return 0 ;
    }
    struct node *n = NULL ; 
    n = (struct node*) malloc(sizeof(struct node));
    n->data = value ;
    n->next = *prev ;
    *prev = n ;
}