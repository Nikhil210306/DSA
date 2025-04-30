#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node* next;
};
void insert(struct Node** head, int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
        newNode->next = *head;  
        return;
    }

    struct Node* temp = *head;
    while (temp->next != *head) 
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = *head;
}
void displayList(struct Node* head) 
{
    if (head == NULL) 
    {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("Circular Linked List: ");
    do 
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } 
    while (temp != head);
    printf("(head)\n");
}
int main() 
{
    struct Node* head = NULL;
    int choice, data;

    while (1) 
    {
        printf("\n Circular Linked List Menu \n");
        printf("1. Insert Element\n");
        printf("2. Display List\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insert(&head, data);
                break;

            case 2:
                displayList(head);
                break;

            case 3:
                printf("Exiting program.\n");
                exit(0);

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}