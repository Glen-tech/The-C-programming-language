#include <stdio.h>
#include <ctype.h>
#include <limits.h>

int main(void)
{
    char string[CHAR_MAX];

    printf("Druk op een cijfer voor de programma te laten eindigen\n");

    for (int i = 0; i <= CHAR_MAX;i++)
    {
        scanf("%c",&string[i]);

        (string[i] >= 'A' && string[i] <= 'Z') ?  putchar(tolower(string[i])) : putchar(toupper(string[i]));

        if(isdigit(string[i]))
        {
           printf("\nEinde programma\n");
           break;
        }
    }

}
