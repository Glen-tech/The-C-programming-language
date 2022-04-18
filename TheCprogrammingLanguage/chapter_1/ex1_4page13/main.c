#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

int main()
{
    double fahr = 0;

    printf("Celsius | Fahr  \n");
    for(fahr = LOWER ; fahr <= UPPER ; fahr += STEP)
    {
    printf("%6.1f \t| %3.0f \n", (5.0/9.0)*(fahr - 32) , fahr);
    }
    return 0;
}
/* Deze programma print een tabel uit van celcuis en fahreneit
*@param = double fahr
*@return = niets
*/

