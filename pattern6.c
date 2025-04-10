#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        int i1 = i+1;
        for (int j = 5-i; j > 0; j--)
        {
            printf("%d", i1);
            i1++;
        }
        printf("\n");
    }
return 0;
}