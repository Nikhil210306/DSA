#include <stdio.h>
#include <string.h>
int main()
{
    char str[30], char_up = 'A', char_lw = 'a';

    printf("\nEnter string: ");
    gets(str);

    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[j] == char_up)
            {
                str[j] = char_lw;
            }
        }
        char_up++;
        char_lw++;
    }

    printf("\nThe Updated string is: ");
    puts(str);
    printf("\n");

    return 0;
}