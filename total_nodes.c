#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* createNode(int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
int countTotalNodes(struct Node* root) 
{
    if (root == NULL)
        return 0;
    
    return 1 + countTotalNodes(root->left) + countTotalNodes(root->right);
}
void inorder(struct Node* root) 
{
    if (root != NULL) 
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() 
{
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->right = createNode(6);
    printf("Inorder traversal of the tree: ");
    inorder(root);
    printf("\n");
    int totalNodes = countTotalNodes(root);
    printf("Total number of nodes: %d\n", totalNodes);
    return 0;
}
