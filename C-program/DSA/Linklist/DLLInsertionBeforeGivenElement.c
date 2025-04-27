#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data ;
    struct node *next ;
    struct node *prev ;
};

void push(struct node **headref , int val);
void insertBefore(struct node **head_rf , struct node *nnext , int newval);
void print(struct node *head);

int main ()
{
    struct node *head = NULL ;
    for(int i=10 ; i<=50 ; i=i+10)
    {
        push(&head,i);
    }
    insertBefore(&head,head->next,1000);
    print(head);
    return 0 ;
}

void push(struct node **headref , int val)
{
    struct node *newnode = NULL ;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = val ;
    newnode->next = *headref ;
    newnode->prev = NULL ;
    if(*headref!=NULL)
    {
        (*headref)->prev = newnode ;
    }
    *headref = newnode ;
}

void insertBefore(struct node**head_rf , struct node *nnext , int newval)
{
    if(nnext==NULL)
    {
        printf("Idiot how could you add a new node before the end of a Linked list\n");
        return ;
    }
    struct node *new = NULL ;
    new = (struct node*) malloc(sizeof(struct node));
    new->data = newval ;
    new->prev = (nnext)->prev ;
    (nnext)->prev = new ;
    new->next = nnext ;
    if(new->prev!=NULL)
    {
        new->prev->next = new ;
    }
    else
    {
        *head_rf = new ;
    }
}

void print(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d->", head->data);
        head = head->next ;
    }
    printf("NULL\n");
}