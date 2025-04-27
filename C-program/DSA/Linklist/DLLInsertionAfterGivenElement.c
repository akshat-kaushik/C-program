#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data ;
    struct node *next ;
    struct node *prev ;
};

void push(struct node **ref , int val);
void insertAfter(struct node **newref , int newval);
void print(struct node *newhead);

int main ()
{
    struct node *head = NULL ;
    for(int i=10 ; i<=50 ; i=i+10)
    {
        push(&head,i);
        if(i==30)
        {
            insertAfter(&head,100);
        }
    }
    //insertAfter(&head,200);
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

void insertAfter(struct node **newref , int newval)
{
    struct node *newnode = NULL ;
    newnode = (struct node*) malloc(sizeof(struct node));
    // checking if elements are present in list
    if((*newref)==NULL)
    {
        printf("LIST IS EMPTY\n");
        return ;
    }
    newnode->data = newval ;
    newnode->next = (*newref)->next ;
    newnode->prev = *newref ;
    (*newref)->next = newnode ;
    // checking whether next node is NULL or not and also it is a bit complicated 
    if(newnode->next!=NULL)
    {
        newnode->next->prev = newnode ; 
    }
} 

void print(struct node *newhead)
{
    while(newhead!=NULL)
    {
        printf("%d->",newhead->data);
        newhead = newhead->next ;
    }
}