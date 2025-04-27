#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data ;
    struct node *next ;
    struct node *prev ;
};

void push(struct node **ref , int val);
void delete(struct node **headrf , struct node *del);
void print(struct node *head);

int main ()
{
    struct node *head = NULL ;
    for(int i=10 ; i<=50 ; i=i+10)
    {
        push(&head,i);
    }
    delete(&head,head->next->next);
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

void delete(struct node **headrf , struct node *del)
{
    if(*headrf==NULL || del==NULL)
    {
        printf("SORRY LIST IS EMPTY\n");
        return ;
    }
    if(*headrf==del)
    {
        *headrf = del->next ;
    }
    if(del->next!=NULL)
    {
        del->next->prev = del->prev ;
    }
    if(del->prev!=NULL)
    {
        del->prev->next = del->next ;
    }
    free(del);
}

void print(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head = head->next ;
    }
    printf("NULL\n");
}