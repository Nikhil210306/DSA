#include<stdio.h>
#include<stdlib.h>
#define Size 5
int queue[Size];
int front=-1,rear=-1;
void enqueue(int value)
{
    if(rear == Size-1)
    {
        printf("queue is full\n");
        return;
    }
    if(front==-1)
    {
        front=0;
    }
    queue[++rear]=value;
    printf("%d, enqueued successfully\n", value);
}
void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("queue is empty\n");
        return;
    }
    printf("dequeued successfully\n",queue[front++]);
    if(front>rear)
    {
        front = rear = -1;
    }
}
void display()
{
    if(front)
}
