#include <stdio.h>

int main()
{
    int c = 0;
    while((c = getchar()) != EOF)
    {
        putchar(c);

        if(c == ' ')
        {
            putchar('\n'); // wordt nu onder elkaar gezet bij spatie
        }

    }
    return 0;
}
/* Deze programma gaat de woorden wat de gebruiker intypt onder elkaar zetten.
 * @param = int c
 * @return = is void
 */
