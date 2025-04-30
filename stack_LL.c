#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void push(struct node** top,int value)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=*top;
    *top=newnode;
    printf("pushed onto the stack\n",value);
}
void pop(struct node** top)
{
    if(*top==NULL)
    {
        printf("stack is empty\n");
    }
    else
    {
        struct node* temp = *top;
        *top=(*top)->next;
        printf("%d popped from the stack\n",temp->data);
        free(temp);
    }
}

void display(struct node* top)
{
    if (top==NULL)
    {
        printf("stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    while (top != NULL) 
    {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}
int main()
{
    struct node* stack=NULL;
    push(&stack,10);
    push(&stack,20);
    push(&stack,30);
    display(stack);
    pop(&stack);
    display(stack);
    return 0;
}