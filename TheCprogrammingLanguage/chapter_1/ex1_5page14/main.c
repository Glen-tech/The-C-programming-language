#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

int main()
{
    double fahr = 0;

    printf("Fahr | Celcuis \n");
    for(fahr = UPPER ; fahr >= LOWER ; fahr -= STEP) // begint van 300 , - 20 tot 0
    {
    printf("%3.0f \t| %6.1f \n", fahr, (5.0/9.0)*(fahr - 32));
    }
    return 0;
}
/* Deze programma print een tabel uit van fahrenteit en celcuis maar dan omgekeerd.
*@param = double fahr
*@return = niets
*/

