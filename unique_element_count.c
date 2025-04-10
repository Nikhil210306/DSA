#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter array length: ");
    scanf("%d", &n);
    printf("\nEnter elements of array:\n");
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe entered array is: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d%s", arr[i], (i == n-1) ? "\n" : ", ");
    }

    printf("\nThe unique elements are: ");

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        if (count > 1)
        {
            continue;
        }
        else
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\n\n");
    return 0;
}