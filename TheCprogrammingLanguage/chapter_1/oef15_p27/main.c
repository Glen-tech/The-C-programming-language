#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20


void conversie(double iets);


int main()
{
    double fahr = 0;

    conversie(fahr);

    return 0;
}
/* Deze programma print een tabel uit van celcuis en fahreneit in een functie
*@param = double fahr
*@return = niets
*/

void conversie(double fahr_f)
{
   printf("Functie coversie \n\n");
   printf("Celsius | Fahr  \n");

    for(fahr_f = LOWER ; fahr_f <= UPPER ; fahr_f += STEP)
    {
    printf("%6.1f \t| %3.0f \n", (5.0/9.0)*(fahr_f - 32) , fahr_f);
    }

}
