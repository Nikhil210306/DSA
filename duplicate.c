#include <stdio.h>
int main()
{
    int n;

    printf("\nEnter the number of elements you want to read in array: ");
    scanf("%d", &n);
    printf("\n");

    int arr[n], count = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = (i+1); j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }

    (count > 0) ? printf("\nThe entered array contains duplicate elements.\n\n") : printf("\nThe entered array doesn't have any duplicate elements.\n\n");

    return 0;
}