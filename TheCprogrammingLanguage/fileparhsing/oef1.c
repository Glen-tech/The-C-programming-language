#include <stdio.h>


int main()
{
    int c , blanks , count ;
    c = blanks= count = 0 ;
    printf("Gaat tot 4 spaties\n")
    while((c = getchar()) != EOF) // neemt de karakter tot einde file oftewel einde input
    {

     if ( c != ' ')
     {
     putchar(c);

     }

     else if ((c == ' ' ) && (blanks == 0))// testcommentaar
     {
         putchar(c);
         blanks = 1 ;
         count++;
     }

                    else if ((c == ' ') && (blanks == 1) << count)
                       {
                         blanks = 0 ; // testcommentaar
                       }
    }

return 0;

}
/* Als de gebruker tot 4 spaties gebruikt wordt deze ingetrimt naar 1 spatie
* @param = int c
* @return = geen return functie aanwezig
*/
