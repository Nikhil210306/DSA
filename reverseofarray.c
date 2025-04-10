#include <stdio.h>
int main()
{
    int n;

    printf("\nEnter the length of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter elements of array:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Element:%d -> ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe entered array is: ");

    for (int i = 0; i < n; i++)
    {
        (i == n-1) ? printf("%d\n", arr[i]) : printf("%d, ", arr[i]);
    }

    if (n % 2 == 0)
    {
        for (int i = 0; i < n/2; i++)
        {
            int temp = arr[i];
            arr[i] = arr[n - 1 - i];
            arr[n - 1 - i] = temp;
        }
    }
    
    else
    {
        for (int i = 0; i < (n - 1)/2; i++)
        {
            int temp = arr[i];
            arr[i] = arr[n - 1 - i];
            arr[n - 1 - i] = temp;
        }
    }

    printf("\nThe reversed array is: ");

    for (int i = 0; i < n; i++)
    {
        (i == n-1) ? printf("%d\n\n", arr[i]) : printf("%d, ", arr[i]);
    }

    return 0;
}