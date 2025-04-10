#include <stdio.h>
int main()
{
    char str[15] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o'};
    int i1 = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("%c ", str[i1]);
            i1++;
        }
        printf("\n");
    }
return 0;
}