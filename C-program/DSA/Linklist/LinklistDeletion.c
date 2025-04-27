#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data ;
    struct node *next ;
};

void push(struct node **newnode , int word);
void print(struct node *head);
void delete(struct node **ref , int del);

int main()
{
    struct node *head = NULL ;
    for(int i=10 ; i<=50 ; i=i+10)
    {
        push(&head,i);
    }
    delete(&head,100);
    print(head);
    return 0;
}

void push(struct node **newnode , int word)
{
    struct node *new = NULL ;
    new = (struct node*) malloc(sizeof(struct node));
    new->data = word ;
    new->next = *newnode ;
    *newnode = new ; 
}

void print(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head = head->next ;
    }
}

void delete(struct node **ref , int del)
{
    struct node *temp = *ref , *prev ;
    if(temp!=NULL && temp->data==del)
    {
        *ref = temp->next ;
        free(temp);
        return ;
    }

    while(temp!=NULL && temp->data!=del)
    {
        prev = temp ;
        temp = temp->next ;
    }

    if(temp==NULL)
    {
        printf("Number Not Found\n");
        return ;
    }

    prev->next = temp->next ;
    free(temp) ;
}