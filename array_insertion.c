#include <stdio.h>
int main()
{
    int n, i1, j1;

    printf("\nEnter length of array: ");
    scanf("%d", &n);

    int a1[n];
    printf("\nEnter elements of array:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter element[%d]: ", i+1);
        scanf("%d", &a1[i]);
    }

    printf("\nEnter the position in which you want to insert element: ");
    scanf("%d", &i1);

    printf("\nEnter the position of element which you want to delete: ");
    scanf("%d", &j1);

    if (i1 > n || i1 < 1 || j1 > n || j1 < 1)
    {
        printf("\nInvalid Position! Please try a valid position.\n\n");
    }

    else
    {
        int temp = 0;
        a1[j1-1] = 0;

        for (int i = i1 - 1; i < j1; i++)
        {
            int temp1 = a1[i];
            a1[i] = temp;
            temp = temp1;
        }

        printf("\nEnter the element that you want to insert: ");
        scanf("%d", &a1[i1-1]);

        printf("\nThe Updated array is -> a1 = { ");

        for (int i = 0; i < n; i++)
        {
            (i == n-1) ? printf("%d }\n\n", a1[i]) : printf("%d, ", a1[i]);
        }
    }
    return 0;
}