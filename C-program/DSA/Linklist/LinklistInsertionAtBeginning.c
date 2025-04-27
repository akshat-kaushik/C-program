#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data ;
    struct Node *next ;
};

void push(struct Node **first , int new);
void print(struct Node *sec);

int main ()
{
    struct Node *head = NULL ;
    push(&head,10);
    push(&head,20);
    push(&head,30);
    push(&head,40);
    push(&head,50);
    print(head);
    return 0 ;
}

void push(struct Node **first , int new)
{
    struct Node *newhead = NULL ;
    newhead = (struct Node*)malloc(sizeof(struct Node));
    newhead->data = new ;
    newhead->next = *first ;
    *first = newhead ;
}

void print(struct Node *sec)
{
    while(sec!=NULL)
    {
        printf("%d->", sec->data);
        sec = sec->next ;
    }
}