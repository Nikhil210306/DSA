#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node* next;
};
void insertAtBeginning(struct Node** head, int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
void insertAtEnd(struct Node** head, int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) 
    {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }

    temp->next = newNode;
}
void insertAtPosition(struct Node** head, int data, int position) 
{
    if (position < 1) 
    {
        printf("Invalid position!\n");
        return;
    }

    if (position == 1) 
    {
        insertAtBeginning(head, data);
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    struct Node* temp = *head;
    for (int i = 1; i < position - 1; i++) 
    {
        if (temp == NULL) 
        {
            printf("Position invalid.\n");
            free(newNode);
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL) 
    {
        printf("Position invalid.\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}
void displayList(struct Node* head) 
{
    if (head == NULL) 
    {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) 
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() 
{
    struct Node* head = NULL;
    int choice, data, position;

    while (1) 
    {
        printf("\n Singly Linked List Menu \n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Display List\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                printf("Enter data to insert at beginning: ");
                scanf("%d", &data);
                insertAtBeginning(&head, data);
                break;

            case 2:
                printf("Enter data to insert at end: ");
                scanf("%d", &data);
                insertAtEnd(&head, data);
                break;

            case 3:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter position (starting from 1): ");
                scanf("%d", &position);
                insertAtPosition(&head, data, position);
                break;

            case 4:
                displayList(head);
                break;

            case 5:
                printf("Exiting program.\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
