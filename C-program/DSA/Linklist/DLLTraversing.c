#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data ;
    struct node *next ;
    struct node *prev ;
};

void push(struct node **ref , int val);
void print(struct node *head);

int main ()
{
    struct node *head = NULL ;
    for(int i=10 ; i<=50 ; i=i+10)
    {
        push(&head,i);
    }
    print(head);
    return 0 ;
}

void push(struct node **ref , int val)
{
    struct node *new = NULL ;
    new = (struct node*) malloc(sizeof(struct node));
    new->data = val ;
    new->next = *ref ;
    new->prev = NULL ;
    if(*ref!=NULL)
    {
        (*ref)->prev = new ; 
    }
    *ref = new ;
}

void print(struct node*head)
{
    struct node *last = NULL ;
    last = (struct node*) malloc(sizeof(struct node));
    printf("\nPRINTING LIST IN FORWARD DIRECTION\n");
    while(head!=NULL)
    {
        printf("%d->",head->data);
        last = head ; 
        head = head->next ;
    }
    printf("NULL\n");

    printf("\nPRINTING LIST IN REVERSE ORDER\n");
    while (last!=NULL)
    {
        printf("%d->",last->data);
        last = last->prev ;
    }
    printf("NULL\n");
}