#include <stdio.h>
int main()
{
    int arr[6] = {10, 4, 3, 50, 23, 90}, max1 = arr[0], max2 = arr[0], max3 = arr[0];

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > max1)
        {
            max1 = arr[i];
        }
    }

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > max3 && arr[i] < max2)
        {
            max3 = arr[i];
        }
    }

    printf("\nThe 1st largest number is -> %d\n", max1);
    printf("The 2nd largest number is -> %d\n", max2);
    printf("The 3rd largest number is -> %d\n\n", max3);

    return 0;
}
