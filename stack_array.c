// STACK IMPLEMENTATION USING ARRAYS
#include<stdio.h>
#define FALSE 0
#define TRUE 1
#define MAX_SIZE 5
int TOP = -1;
int stack_array[MAX_SIZE];

int push(int val)
{
    if(TOP == MAX_SIZE-1)
    {
        printf("\nERROR: Stack overflow");
        return FALSE;
    }
    stack_array[++TOP] = val;
    return FALSE;
}

int pop()
{
    if(isempty())
    {
        printf("\nThe STACK is EMPTY. POP operation cannot be performed.");
        return FALSE;
    }
    else
        TOP--;
        return FALSE;
}

int top()
{
    return(stack_array[TOP]);
}
int isempty()
{
    if(TOP == -1)
    {
        return TRUE;
    }
    else
        return FALSE;
}

int print_stack()
{
    int count = 0;
    printf("\nSTACK is:");
    while(count!=TOP+1)
    {
        printf(" %d",stack_array[count]);
        count++;
    }
    printf("\n");
    return FALSE;
}
int main()
{
    pop();print_stack();
    push(2);print_stack();
    printf("\nTOP Value = %d",top());
    push(5);print_stack();
    push(8);print_stack();
    isempty();
    pop();print_stack();
    printf("\nTOP Value = %d",top());
    push(6);print_stack();
    push(2);print_stack();
    pop();print_stack();
    push(1);print_stack();
    push(9);print_stack();
    push(12);print_stack();
    push(6);print_stack();
    push(19);print_stack();
    printf("\nTOP Value = %d",top());
    pop();print_stack();
    push(7);print_stack();
    push(14);print_stack();
    push(21);print_stack();
    return FALSE;
}
