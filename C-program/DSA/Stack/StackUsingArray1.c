#include<stdio.h>
#include<stdlib.h>

int n , top=-1 , *stack ;

void push(int x);
void pop();
void peep();
void print();

int main ()
{
    n = 10 ;
    stack = (int*) malloc(n*sizeof(int));
    for(int i=1 ; i<=10 ; i++)
    {
        push(i);
    }
    pop();
    peep();
    pop();
    print();
    free(stack);
    return 0;
}

void push(int x)
{
    if(top==n-1)
    {
        printf("STACK OVERFLOW\n");
        return ;
    }
    stack[++top] = x ;
}

void pop()
{
    if(top==-1)
    {
        printf("STACK UNDERFLOW\n");
        return ;
    }
    top-- ;
}

void peep()
{
    if(top==-1)
    {
        printf("SORRY NO ELEMENT IS PRESENT\n");
        return ;
    }
    printf("%d\n",stack[top]);
}

void print()
{
    for(int i=top ; i>-1 ; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}