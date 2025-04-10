#include <stdio.h>
int main()
{
    int matrix[3][3];

    printf("\nENTER ELEMENTS BELOW:\n");
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}