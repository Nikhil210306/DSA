#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack[MAX];
int top=-1;
void push(int value)
{
if(top==MAX-1)
{
printf("stack overflow\n");
}
else
{
    top++;
    stack[top]=value;
    printf("%d,pushed onto the stack\n",value);
}
}
void pop()
{
    if(top==-1)
    {
        printf("stack underflow\n");
    }
    else
    {
        printf("%d, popped from the stack\n",stack[top]);
        top--;
    }
}
void peek()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("top element is %d\n",stack[top]);
    }
}
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements are:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}
int main() {
    int choice, value;
    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}