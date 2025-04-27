/* HOW TO CREATE A LINKED LIST BASIC */
#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data ; 
    struct Node* next ;
};

void print(struct Node *first);
void print1(struct Node *sec);

int main ()
{
    struct Node *head = NULL ;
    struct Node *sec = NULL ;
    struct Node *third = NULL ;

    head = (struct Node*) malloc(sizeof(struct Node));
    sec = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));

    head->data = 1 ;
    head->next = sec ;
    sec->data = 2 ;
    sec->next = third ;
    third->data = 3 ;
    third->next = NULL ;

    print(head);
    //print1(head);

    return 0 ;
}

void print(struct Node *first)
{
    while (first!=NULL)
    {
        printf("%d->",first->data);
        first = first->next ;
    }
}

void print1(struct Node *sec)
{
    int i;
    for (i=0 ; sec!=NULL ; i++)// (sec!=NULL) it is a condition and tell for loop where to stop.
    {
        printf("%d !!", sec->data);
        sec = sec->next ;
    }
}