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
    if (*head == NULL) 
    {
        newNode->next = newNode;
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != *head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = *head;
}
void deleteFromBeginning(struct Node** head) 
{
    if (*head == NULL) 
    {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = *head;
    if (temp->next == *head) 
    {
        printf("Deleted: %d\n", temp->data);
        free(temp);
        *head = NULL;
        return;
    }
    struct Node* last = *head;
    while (last->next != *head)
        last = last->next;
    *head = temp->next;
    last->next = *head;
    printf("Deleted: %d\n", temp->data);
    free(temp);
}
void deleteFromEnd(struct Node** head) 
{
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = *head;
    if (temp->next == *head) 
    {
        printf("Deleted: %d\n", temp->data);
        free(temp);
        *head = NULL;
        return;
    }
    struct Node* prev = NULL;
    while (temp->next != *head) 
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = *head;
    printf("Deleted: %d\n", temp->data);
    free(temp);
}
void deleteFromPosition(struct Node** head, int position) {
    if (*head == NULL || position <= 0) 
    {
        printf("Invalid position or empty list.\n");
        return;
    }
    if (position == 1) 
    {
        deleteFromBeginning(head);
        return;
    }
    struct Node* current = *head;
    struct Node* prev = NULL;
    int count = 1;
    while (count < position && current->next != *head) 
    {
        prev = current;
        current = current->next;
        count++;
    }
    if (count != position) 
    {
        printf("Position out of range.\n");
        return;
    }
    prev->next = current->next;
    printf("Deleted: %d\n", current->data);
    free(current);
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
    int choice, data, position;
    while (1) {
        printf("\n Circular Linked List Menu \n");
        printf("1. Insert Element\n");
        printf("2. Display List\n");
        printf("3. Delete from Beginning\n");
        printf("4. Delete from End\n");
        printf("5. Delete from Position\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
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
                printf("Enter position to delete: ");
                scanf("%d", &position);
                deleteFromPosition(&head, position);
                break;

            case 6:
                printf("Exiting program.\n");
                exit(0);

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}