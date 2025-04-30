#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
void display (struct node *p)
{
    while(p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}

int main()
{
    struct node* head;
    struct node* one;
    struct node* two;
    struct node* three;

    one = (struct node*) malloc(sizeof(struct node));
    two = (struct node*) malloc(sizeof(struct node));
    three = (struct node*) malloc(sizeof(struct node));

    one->data = 1;
    two->data = 2;
    three->data = 3;

    head = one;
    one->next = two;
    two->next = three;
    three->next =NULL;

    display(head);

    return 0;
}