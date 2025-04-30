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
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }

    temp->next = newNode;
}
void sortList(struct Node* head) 
{
    if (head == NULL || head->next == NULL) 
    return;
    struct Node* i;
    struct Node* j;
    int temp;

    for (i = head; i->next != NULL; i = i->next) 
    {
        for (j = i->next; j != NULL; j = j->next) 
        {
            if (i->data > j->data) 
            {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
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
int main() {
    struct Node* head = NULL;
    int choice, data;

    while (1) 
    {
        printf("\n Singly Linked List Sorting Menu \n");
        printf("1. Insert Element\n");
        printf("2. Sort List\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
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
                sortList(head);
                break;

            case 3:
                displayList(head);
                printf("List has been sorted.\n");
                break;

            case 4:
                printf("Exiting program.\n");
                exit(0);

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
