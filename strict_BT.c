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
int isStrictBinaryTree(struct Node* root) 
{
    if (root == NULL)
        return 1; 
    if ((root->left == NULL && root->right != NULL) ||
        (root->left != NULL && root->right == NULL))
        return 0; 
    return isStrictBinaryTree(root->left) && isStrictBinaryTree(root->right);
}
void inorder(struct Node* root) 
{
    if (root != NULL) {
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
    printf("Inorder traversal of the tree: ");
    inorder(root);
    printf("\n");
    if (isStrictBinaryTree(root))
        printf("The binary tree is a strict binary tree.\n");
    else
        printf("The binary tree is NOT a strict binary tree.\n");
    return 0;
}
