#include <stdio.h>

int main()
{
    int c = 0 ;

    while((c = getchar()) != EOF) // neemt de karakter tot einde file oftewel einde input
    {
        putchar(c); // print de karakter uit
        printf("\n%d\n", getchar() != EOF);// is gelijk aan 1 want einde of file is bereikt"

    }

   return 0;

}
/* Deze programma duid aan dat de getchar() != EOF gelijk is aan 1 bij het bereiken van de EOF
* @param = int c
* @return = geen return functie aanwezig
*/
