#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int blanco , tabs , nieuwelijn;

    blanco = tabs = nieuwelijn = 0;

    int c = 0;

    printf("Voer je gegevens in , bij indrukken van 0 worden de blanco's , tabs en nieuwe lijnen uitgeprint\n");

    while((c = getchar()) != EOF) // neemt de karakter tot einde file oftewel einde input
    {
        if(c == ' ')
        {
            blanco++;
        }

            else if(c == '\t') // 't' is 1 karakter
            {
                tabs++;
            }

            else if( c == '\n')
            {
                nieuwelijn++;
            }

            else if(c == '0')
            {
                printf("blanco's = %d , tabs = %d , nieuwe lijnen = %d", blanco,tabs,nieuwelijn);
            }
    }

return 0;

}
/* Deze programma telt de blanco's , tabs en nieuwelijnen bij ingaven.
* @param = int c
* @return = geen return functie aanwezig
*/
