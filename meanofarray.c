#include <stdio.h>
int main()
{
    int n, mean = 0, num;

    printf("\nHow many numbers you want to enter: ");
    scanf("%d", &n);
    printf("\n");

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
        mean += arr[i];
    }

    mean /= n;

    printf("\nThe mean of entered numbers is -> %d\n", mean);
    printf("\n");
    return 0;
}