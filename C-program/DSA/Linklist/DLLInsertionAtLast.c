#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data ;
    struct node *next ;
    struct node *prev ;
};

void push(struct node **ref , int val);
void last(struct node **headrf , int newval);
void print(struct node *head);

int main ()
{
    struct node *head = NULL ;
    int i = 10 ;
    while(i<=50)
    {
        push(&head,i);
        i = i + 10 ;
    }
    last(&head,1000);
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

void last(struct node **headrf , int newval)
{
    struct node *newdata = NULL , *lest = NULL ;
    newdata = (struct node*) malloc(sizeof(struct node));
    lest = (struct node*) malloc(sizeof(struct node));
    lest = *headrf ;
    newdata->data = newval ;
    newdata->next = NULL ; 
    // when linked list is empty 
    if(*headrf==NULL)
    {
        newdata->prev = NULL ;
        (*headrf) = newdata ;
        return ;
    }
    while(lest->next!=NULL)
    {
        lest = lest->next ;
    }
    lest->next = newdata ;
    newdata->prev = lest ;
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