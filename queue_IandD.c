#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int queue[SIZE];
int front = -1, rear = -1;
void enqueue(int value) 
{
    if (rear == SIZE - 1) 
    {
        printf("Queue is full (overflow).\n");
        return;
    }
    if (front == -1) front = 0; 
    queue[++rear] = value;
    printf("Inserted %d into queue.\n", value);
}
void dequeue() 
{
    if (front == -1 || front > rear) 
    {
        printf("Queue is empty (underflow).\n");
        return;
    }
    printf("Deleted %d from queue.\n", queue[front++]);
    if (front > rear) 
    {
        front = rear = -1;
    }
}
void display() 
{
    if (front == -1) 
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) 
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}
int main() 
{
    int choice, value;
    while (1) 
    {
        printf("\n Queue Menu \n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}
