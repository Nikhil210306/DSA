#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            printf(" ");
        }
        for (int j1 = 0; j1 < i; j1++)
        {
            printf("*");
        }
        printf("\n");
    }
return 0;
}