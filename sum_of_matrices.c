#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;

    printf("\nEnter the no. of rows and columns for Matrix-A in 'rowsxcolumns' form: ");
    scanf("%dx%d", &r1, &c1);

    printf("\nEnter the no. of rows and columns for Matrix-B in 'rowsxcolumns' form: ");
    scanf("%dx%d", &r2, &c2);

    if (r1 == r2 && c1 == c2)
    {
        int matrix_1[r1][c1], matrix_2[r2][c2], sum[r1][c1];
        printf("\nEnter elements of 1st matrix below:\n");
        printf("\n");

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("matrix-1[%d][%d]: ", i, j);
                scanf("%d", &matrix_1[i][j]);
            }
        }

        printf("\nEnter elements of 2nd matrix below:\n");
     printf("\n");

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("matrix-2[%d][%d]: ", i, j);
                scanf("%d", &matrix_2[i][j]);
            }
        }

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                sum[i][j] = matrix_1[i][j] + matrix_2[i][j];
            }
        }

        printf("\nThe sum of matrix-1 and matrix-2 is:\n");
        printf("\n");

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                (r1 < c1) ? printf("%d\t", sum[i][j]) : printf("%d\t\t", sum[i][j]);
            }
            printf("\n\n");
        }
    }
    
    else
    {
        printf("\nThe sum of given matrices is not possible. Try matrix with different orders.\n\n");
    }

    return 0;
}
