/* HOW TO SEARCH IN A LINKED LIST BASIC */
#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data ;
    struct Node *next ;
};

void print(struct Node *sec);
void search(struct Node *first);

int main ()
{
    struct Node *head = NULL ;
    struct Node *sec = NULL ;
    struct Node *third = NULL ;
    struct Node *four = NULL ;
    struct Node *five = NULL ;

    head = (struct Node*) malloc(sizeof(struct Node));
    sec = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    four = (struct Node*) malloc(sizeof(struct Node));
    five = (struct Node*) malloc(sizeof(struct Node));

    head->data = 1 ;
    head->next = sec ;
    sec->data = 2 ;
    sec->next = third ;
    third->data = 3 ;
    third->next = four ;
    four->data = 4 ;
    four->next = five ;
    five->data = 5 ;
    five->next = NULL ;

    print(head);
    search(head);

    return 0 ;
}

void print(struct Node *sec)
{
    int i;
    for(i=0 ; sec!=NULL ; i++)
    {
        printf("%d->",sec->data);
        sec = sec->next ;
    }
    printf("\n");
}

void search(struct Node *first)
{
    int n , count = 0 ;
    printf("ENTER NUMBER YOU WANT TO SEARCH\n");
    scanf("%d",&n);
    while(first!=NULL)
    {
        if(first->data==n)
        {
            printf("NUMBER FOUND\n");
            count++;
            break;
        }
        first = first->next ;
    }
    if(count==0)
    {
        printf("NUMBER NOT FOUND\n");
    }
}