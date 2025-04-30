#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node* next;
};
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
void deleteFromBeginning(struct Node** head) 
{
    if (*head == NULL) 
    {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)->next;
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

    if ((*head)->next == NULL) 
    {
        printf("Deleted: %d\n", (*head)->data);
        free(*head);
        *head = NULL;
        return;
    }

    struct Node* temp = *head;
    while (temp->next->next != NULL) 
    {
        temp = temp->next;
    }

    printf("Deleted: %d\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
}
void deleteFromPosition(struct Node** head, int position) 
{
    if (*head == NULL) 
    {
        printf("List is empty.\n");
        return;
    }

    if (position <= 0) 
    {
        printf("Invalid position.\n");
        return;
    }

    if (position == 1) 
    {
        deleteFromBeginning(head);
        return;
    }

    struct Node* temp = *head;
    for (int i = 1; i < position - 1; i++) 
    {
        if (temp == NULL || temp->next == NULL) 
        {
            printf("Position invallid.\n");
            return;
        }
        temp = temp->next;
    }

    if (temp->next == NULL) 
    {
        printf("Position invalid.\n");
        return;
    }

    struct Node* toDelete = temp->next;
    temp->next = toDelete->next;
    printf("Deleted: %d\n", toDelete->data);
    free(toDelete);
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
        printf("%d -> ", temp->data);
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
        printf("1. Insert at End\n");
        printf("2. Delete from Beginning\n");
        printf("3. Delete from End\n");
        printf("4. Delete from Position\n");
        printf("5. Display List\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insertAtEnd(&head, data);
                break;

            case 2:
                deleteFromBeginning(&head);
                break;

            case 3:
                deleteFromEnd(&head);
                break;

            case 4:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                deleteFromPosition(&head, position);
                break;

            case 5:
                displayList(head);
                break;

            case 6:
                printf("Exiting program.\n");
                exit(0);

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}