#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        int i1 = 1;
        for (int j = 0; j < i+1; j++)
        {
            printf("%d", i1);
            i1++;
        }
        printf("\n");
    }
return 0;
}