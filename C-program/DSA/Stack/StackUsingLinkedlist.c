#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data ;
    struct node *next ;
};
typedef struct node stack ;

void push(stack **ref , int val);
void pop(stack **toprf);
void peep(stack *head);
void print(stack *heep);

int main ()
{
    stack *top = NULL ;
    for(int i=1 ; i<=10 ; i++)
    {
        push(&top,i);
    }
    peep(top);
    pop(&top);
    pop(&top);
    peep(top);
    print(top);
    free(top);
    return 0 ;
}

void push(stack **ref , int val)
{
    stack *new = NULL ;
    new = (stack*) malloc (sizeof(stack));
    new->data = val ;
    new->next = *ref ;
    *ref = new ;
}

void pop(stack **toprf)
{
    if(*toprf==NULL)
    {
        printf("STACK UNDERFLOW\n");
        return ;
    }
    stack *temp = NULL ;
    temp = (stack*) malloc (sizeof(stack));
    temp = *toprf ;
    printf("POP ITEM :%d\n",(*toprf)->data);
    *toprf = (*toprf)->next ;
    free(temp);
}

void peep(stack *head)
{
    if(head==NULL)
    {
        printf("NO ITEM IS PRESENT IN THE LINKED LIST\n");
        return ;
    }
    printf("TOP OF THE STACK :%d\n",head->data);
}

void print(stack *heep)
{
    printf("\n||");
    while(heep!=NULL)
    {
        printf("%d->||",heep->data);
        heep = heep->next ;
    }
    printf("NULL||\n\n");
}
