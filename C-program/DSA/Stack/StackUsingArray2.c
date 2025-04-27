#include<stdio.h>
#include<stdlib.h>

#define MAX 10 

struct node
{
    int item[MAX] ;
    int top ;
};

typedef struct node stack ;

void push(stack *head , int data);
void pop(stack *s);
void peep(stack *s);
void print(stack *s);

int main()
{
    stack *s ;
    s = (stack*) malloc(sizeof(stack));

    s->top = -1 ;

    for(int i=1 ; i<=10 ; i++)
    {
        push(s,i);
    }
    peep(s);
    pop(s);
    push(s,100);
    print(s);
    free(s);
    return 0 ;
}

void push(stack *head , int data)
{
    if(head->top==MAX-1)
    {
        printf("STACK OVERFLOW\n");
        return ;
    }
    head->top++ ;
    head->item[head->top] = data ;
}

void pop(stack *s)
{
    if(s->top==-1)
    {
        printf("STACK UNDERFLOW\n");
        return ;
    }
    printf("POP ITEM :%d\n",s->item[s->top]);
    s->top-- ;
}

void peep(stack *s)
{
    if(s->top==-1)
    {
        printf("NO ITEM IS PRESENT IN THE STACK\n");
        return ;
    }
    printf("TOP OF THE STACK :%d\n",s->item[s->top]);
}

void print(stack *s)
{
    printf("\n||");
    for(int i=s->top ; i>-1 ; i--)
    {
        printf("%d||",s->item[i]);
    }
    printf("\n\n");
}