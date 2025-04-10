#include <stdio.h>
int main()
{
    int comp[5][3], sales[8] = {0, 0, 0, 0, 0, 0, 0, 0}; //rows -> salesmen and columns -> products

    printf("\nEnter the no. of units sold by salesmen below:\n");
    printf("\n");

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("No. of units of product %d by salesman %d: ", j+1, i+1);
            scanf("%d", &comp[i][j]);
        }
    }

    printf("\n");

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sales[j] += comp[i][j];
            sales[3 + i] += comp[i][j];
        }
    }

    for(int i = 0; i < 8; i++)
    {
        (i < 3) ? printf("Total Sales of Product %d are: %d.\n", (i+1), sales[i]) : printf("Total Sales by Salesman %d are: %d.\n", (i+1), sales[i]);
    }

    printf("\n");

    return 0;
}