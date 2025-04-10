#include <stdio.h>
int main()
{
    int n, pos = 0;

    printf("\nNumber of elements you want to read in array: ");
    scanf("%d", &n);
    printf("\n");

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }

    int sm = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < sm)
        {
            sm = arr[i];
            pos++;
        }
    }

    printf("\nThe index of smallest number i.e. %d in array is -> %d\n\n", sm, pos);
    return 0;
}