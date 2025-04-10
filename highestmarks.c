#include <stdio.h>
int main()
{
    int marks[5][3];

    printf("\nENTER MARKS BELOW:\n");
    printf("\n");

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Enter the marks of Student %d in Subject %d: ", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
    }

    int max[3] = {marks[0][0], marks[0][1], marks[0][2]};

    for(int j = 0; j < 3; j++)
    {
        for(int i = 0; i < 5; i++)
        {
            if(max[j] < marks[i][j])
            {
                max[j] = marks[i][j];
            }
        }
    }

    printf("\n");

    for(int i = 0; i < 3; i++)
    {
        printf("Highest Marks in Subject %d are: %d\n", (i+1), max[i]);
    }

    printf("\n");

    return 0;
}