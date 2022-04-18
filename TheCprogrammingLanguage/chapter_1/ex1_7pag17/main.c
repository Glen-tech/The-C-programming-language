#include <stdio.h>

int main()
{
    int c = 0 ;

    while((c = getchar()) != EOF) // neemt de karakter tot einde file oftewel einde input
    {
        putchar(c); // print de karakter uit
        printf("\n%d\n", EOF);// waarde van EOF is -1

    }

   return 0;

}
/* Deze programma print de waarde uit van EOF
* @param = int c
* @return = geen return functie aanwezig
*/
