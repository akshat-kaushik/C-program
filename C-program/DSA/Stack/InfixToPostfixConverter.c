#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

typedef struct node
{
    char item [MAX] ;
    int top ;
}stack;

void infixtopostfix(stack *s , char *arr);
void push(stack *ref , char val);
void pusharr(char *array , char newval);
void pop(stack *toprf);
void print(char *head);

char post[MAX] ;
int j = 0 ;

int main ()
{
    stack *s = NULL ;
    s = (stack*) malloc(sizeof(stack));
    s->top = -1 ;
    char exp [MAX] ;
    printf("\nENTER EXPRESSION\n");
    gets(exp);
    infixtopostfix(s,exp);
    print(post);
    free(s);
    return 0 ;
}

void infixtopostfix(stack *s , char *arr)
{
    int i , len = strlen(arr) ;
    post ;
    for(i=0 ; i<=len ; i++)
    {
        if(i==0)
        {
            s->item[++s->top] = '(' ;
        }
        if(i==len)
        {
            //YOU CAN USE BOTH OPTIONS 
            arr[len] = ')' ;
            //pop(s);
            //return ;
        }
        if(arr[i]=='(' || arr[i]==')' || arr[i]=='^' || arr[i]=='*' || arr[i]=='/' || arr[i]=='%' || arr[i]=='+' || arr[i]=='-' || arr[i]=='=')
        {
            push(s,arr[i]);
        }
        else
        {
            pusharr(post,arr[i]);
        }
    }
}

void push(stack *ref , char val)
{
    if(ref->top==MAX-1)
        {
            printf("STACK OVERFLOW\n");
            return ;
        }
    if(val=='(' || val==')' || val=='^' || val=='*' || val=='/' || val=='%' || val=='+' || val=='-' || val=='=')
    {    
    label:
    {
        if(val=='(')
        {
            ref->top++ ;
            ref->item[ref->top] = val ;
        }
        if(val==')')
        {
            while(ref->item[ref->top]!='(')
            {
                pop(ref);
            }
            ref->top-- ;
        }
        if(val=='^')
        {
            if(ref->item[ref->top]==val)
            {
                ref->top++ ;
                ref->item[ref->top] = val ;
            }
            else
            {
                if(ref->item[ref->top]=='(')
                {
                    ref->top++ ;
                    ref->item[ref->top] = val ;
                }    
                else
                {
                    ref->top++ ;
                    ref->item[ref->top] = val ;
                }
            }
        }
        if(val=='*' || val=='/' || val=='%')
        {
            if(ref->item[ref->top]=='(')
                {
                    ref->top++ ;
                    ref->item[ref->top] = val ;
                    return ;
                }  
            if(ref->item[ref->top]=='^')
            {
                pop(ref);
                if(ref->item[ref->top]=='^' || ref->item[ref->top]=='(')
                {
                    goto label ;
                }
                ref->top++ ;
                ref->item[ref->top] = val ;
            }
            else
            {
                if(ref->item[ref->top]=='*' || ref->item[ref->top]=='/' || ref->item[ref->top]=='%')
                {
                    pop(ref);
                    if(ref->item[ref->top]=='*' || ref->item[ref->top]=='/' || ref->item[ref->top]=='%')
                    {
                        goto label ;
                    }  
                    ref->top++ ;
                    ref->item[ref->top] = val ;
                }
                else
                {
                    if(ref->item[ref->top]=='^')
                    {
                        pop(ref);
                        if(ref->item[ref->top]=='^' || ref->item[ref->top]=='*' || ref->item[ref->top]=='/' || ref->item[ref->top]=='%')
                        {
                            goto label ;
                        }  
                        ref->top++ ;
                        ref->item[ref->top] = val ;
                    }
                    else
                    {
                        ref->top++ ;
                        ref->item[ref->top] = val ;
                    }    
                }
            }
        }
        if(val=='+' || val=='-')
        {
            if(ref->item[ref->top]=='^' || ref->item[ref->top]=='*' || ref->item[ref->top]=='/' || ref->item[ref->top]=='%')
            {
                pop(ref);
                if(ref->item[ref->top]=='^' || ref->item[ref->top]=='*' || ref->item[ref->top]=='/' || ref->item[ref->top]=='%' || ref->item[ref->top]=='+' || ref->item[ref->top]=='-')
                {
                    goto label ;
                }
                ref->top++ ;
                ref->item[ref->top] = val ;
            }
            else
            {
                if(ref->item[ref->top]=='+' || ref->item[ref->top]=='-')
                {
                    pop(ref);
                    if(ref->item[ref->top]=='^' || ref->item[ref->top]=='*' || ref->item[ref->top]=='/' || ref->item[ref->top]=='%' || ref->item[ref->top]=='+' || ref->item[ref->top]=='-')
                    {
                        goto label ;
                    }
                    ref->top++ ;
                    ref->item[ref->top] = val ;
                }
                else
                {
                    ref->top++ ;
                    ref->item[ref->top] = val ;
                }
            }
        }
    }
    }
    else
    {
        ref->top++ ;
        ref->item[ref->top] = val ;
    }

}

void pusharr(char *array , char newval)
{
    post[j] = newval ;
    j++ ;
}

void pop(stack *toprf)
{
    if(toprf->top==-1)
    {
        printf("STACK UNDERFLOW\n");
        return ;
    }
    if(toprf->top==0)
    {
        return ;
    }
    pusharr(post,toprf->item[toprf->top]);
    printf("POP ITEM :%c\n",toprf->item[toprf->top]);
    toprf->top--;
}

void print(char *head)
{
    int k , leen = strlen(head) ;
    printf("\n");
    for(k=0 ; k<=leen ; k++)
    {
        if(head[k]=='(' || head[k]==')')
        {
            continue;
        }
        printf("%c",head[k]);
    }
    printf("\n");
}