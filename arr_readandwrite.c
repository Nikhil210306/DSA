#include <stdio.h>
int main()
{
    int n;

    printf("\nEnter how much numbers you want to enter: ");
    scanf("%d", &n);
    printf("\n");
    
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }

    printf("\nEntered numbers are:\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n\n");
    return 0;
}