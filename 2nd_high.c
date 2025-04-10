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
    
    int max = arr[0], max2 = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max2 && arr[i] < max)
        {
            max2 = arr[i];
        }
    }
    
    printf("\nThe second highest number out the entered numbers is %d\n", max2);
    printf("\n");
    return 0;
}