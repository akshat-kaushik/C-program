#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data ;
    struct node *next ;
    struct node *prev ;
};

void printForward(struct node *head);
void printBackward(struct node *back);

int main ()
{
    struct node *head = NULL ;
    struct node *sec = NULL ;
    struct node *third = NULL ;
    struct node *four = NULL ;
    struct node *five = NULL ;

    head = (struct node*) malloc (sizeof(struct node));
    sec = (struct node*) malloc (sizeof(struct node));
    third = (struct node*) malloc (sizeof(struct node));
    four = (struct node*) malloc (sizeof(struct node));
    five = (struct node*) malloc (sizeof(struct node));

    head->data = 10 ;
    head->next = sec ;
    head->prev = NULL ;
    sec->data = 20 ;
    sec->next = third ;
    sec->prev = head ;
    third->data = 30 ;
    third->next = four ;
    third->prev = sec ;
    four->data = 40 ;
    four->next = five ;
    four->prev = third ;
    five->data = 50 ;
    five->next = NULL ;
    five->prev = four ;

    printForward(head);
    printBackward(five);
    return 0 ;
}

void printForward(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head = head->next ;
    }
    printf("NULL");
    printf("\n");
}

void printBackward(struct node *back)
{
    while(back!=NULL)
    {
        printf("%d<-",back->data);
        back = back->prev ;
    }
    printf("NULL");
    printf("\n");
}