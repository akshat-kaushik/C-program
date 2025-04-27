#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data ;
    struct node *next ;
};

void print(struct node *head);
void end(struct node **ref , int newdata);

int main ()
{
    struct node *head = NULL ;
    struct node *sec = NULL ;
    struct node *third = NULL ;
    struct node *four = NULL ;

    head = (struct node*) malloc (sizeof(struct node));
    sec = (struct node*) malloc (sizeof(struct node));
    third = (struct node*) malloc (sizeof(struct node));
    four = (struct node*) malloc (sizeof(struct node));

    head->data = 10 ;
    head->next = sec ;
    sec->data = 20 ;
    sec->next = third ; 
    third->data = 30 ; 
    third->next = four ; 
    four->data = 40 ;
    four->next = NULL ;

    end(&head,100);
    print(head);
    free(head);
    return 0 ;
}

void end(struct node **ref , int newdata)
{
    struct node *new = NULL ;
    struct node *temp = NULL ;

    new = (struct node*) malloc(sizeof(struct node));
    temp = (struct node*) malloc(sizeof(struct node));

    new->data = newdata ;
    new->next = NULL ;
    temp = *ref ;

    if(*ref==NULL)
    {
        *ref = new ;
    }

    for(int i=0 ; temp->next!=NULL ; i++)
    {
        temp = temp->next ;
    } 
    temp->next = new ;
    //print(*ref);
}

void print(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head = head->next ;
    }
}