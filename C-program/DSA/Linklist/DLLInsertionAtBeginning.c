#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data ; 
    struct node *next ;
    struct node *prev ;
};

void mypush(struct node **my , int val);
void push(struct node **ref , int newval);
void print(struct node *head);

int main ()
{
    struct node *head = NULL ;
    push(&head,40);
    push(&head,30);
    push(&head,20);
    push(&head,10);
    //push(&head,100);
    print(head);
    return 0 ;
}
// function that I developed (not very effective)
// In this function all prev pointers are set to zero 
void mypush(struct node **my , int val)
{
    struct node *new = NULL ;
    new = (struct node*) malloc (sizeof(struct node));
    new->data = val ;
    new->next = *my ;
    new->prev = NULL ;
    //(*my)->prev = new ;
    *my = new ;
}
// Use this 
void push(struct node **ref , int newval)
{
    struct node *newdata = NULL ;
    newdata = (struct node*) malloc (sizeof(struct node));
    newdata->data = newval ;
    newdata->next = *ref ;
    newdata->prev = NULL ;
    if(*ref!=NULL)//change head->prev from NULL to new node address
    {
        (*ref)->prev = newdata ;
    }
    *ref = newdata ;
}

void print(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head = head->next ;
    }
    printf("NULL");
    printf("\n");
}

