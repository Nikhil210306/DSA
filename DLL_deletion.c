#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node* prev;
    struct Node* next;
};
void insert(struct Node** head, int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) 
    {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}
void deleteFromBeginning(struct Node** head) 
{
    if (*head == NULL) 
    {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = *head;
    *head = temp->next;
    if (*head != NULL)
        (*head)->prev = NULL;

    printf("Deleted: %d\n", temp->data);
    free(temp);
}
void deleteFromEnd(struct Node** head) 
{
    if (*head == NULL) 
    {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = *head;
    if (temp->next == NULL) 
    {
        printf("Deleted: %d\n", temp->data);
        free(temp);
        *head = NULL;
        return;
    }
    while (temp->next != NULL)
        temp = temp->next;
    temp->prev->next = NULL;
    printf("Deleted: %d\n", temp->data);
    free(temp);
}
void displayList(struct Node* head) 
{
    if (head == NULL) 
    {
        printf("List is empty.\n");
        return;
    }
    printf("Doubly Linked List: ");
    struct Node* temp = head;
    while (temp != NULL) 
    {
        printf("%d <-> ", temp->data);
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
        printf("\n Doubly Linked List Menu \n");
        printf("1. Insert at End\n");
        printf("2. Display List\n");
        printf("3. Delete from Beginning\n");
        printf("4. Delete from End\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                insert(&head, data);
                break;
            case 2:
                displayList(head);
                break;
            case 3:
                deleteFromBeginning(&head);
                break;
            case 4:
                deleteFromEnd(&head);
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}