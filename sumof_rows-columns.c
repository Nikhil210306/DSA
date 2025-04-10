#include <stdio.h>
int main()
{
    int r, c;

    printf("\nEnter the order of Matrix-A (rowsxcolumns): ");
    scanf("%dx%d", &r, &c);

    printf("\nEnter the elements of Matrix-A:\n");
    int a[r][c], sum[r+c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r+c; i++)
    {
        sum[i] = 0;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i] += a[i][j];
            sum[r+j] += a[i][j];
        }
    }
    printf("\n");

    for (int i = 0; i < r+c; i++)
    {
        (i < r) ? printf("The sum of row-%d is -> %d\n", i, sum[i]) : printf("The sum of column-%d is -> %d\n", i-r, sum[i]);
    }
    printf("\n");
    return 0;
}