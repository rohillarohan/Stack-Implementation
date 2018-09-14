// STACK IMPLEMENTATION USING LINKED LIST
#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define NULL 0

struct node
{
    int data;
    struct node *link;
};

struct node *TOP = NULL;

int push(int val)
{
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    if(TOP == NULL)
    {
        new_node->data = val;
        new_node->link = NULL;
        TOP = new_node;
    }
    else
    {
        new_node->data = val;
        new_node->link = TOP;
        TOP = new_node;
    }

}
void print_stack()
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp = TOP;
    printf("\nSTACK: ");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int pop()
{
    if(isempty())
    {
        printf("\nThe STACK is EMPTY. POP operation cannot be performed.");
    }
    else
    {
        TOP  = TOP->link;
    }
    return FALSE;
}

int isempty()
{
    if(TOP == NULL)
        return TRUE;
    else
        return FALSE;
}

int top()
{
    return(TOP->data);
}

int main()
{
    pop();
    push(2);print_stack();
    push(4);print_stack();
    printf("\nTOP Value = &d",top());
    push(6);print_stack();
    push(8);print_stack();
    pop();print_stack();
    pop();print_stack();
    pop();print_stack();
    push(10);print_stack();
    push(12);print_stack();
    printf("\nTOP Value = %d",top());
    push(14);print_stack();
    push(16);print_stack();
    push(18);print_stack();
    push(20);print_stack();
    pop();print_stack();
    printf("\nTOP Value = %d",top());
    push(24);print_stack();
    push(28);print_stack();
    pop();print_stack();
    push(32);print_stack();
    return FALSE;
}
