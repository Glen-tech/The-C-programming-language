#include <stdio.h>

#define swamp(a,b,c)    a=b,b=c,c=a;


int main()
{

    int t= 0;
    int x = 0;
    int y = 0;

    printf("Geef 2 getallen in \n");
    printf("Getal 1 = ");scanf("%d",&x);
    printf("Getal 2 = ");scanf("%d",&y);putchar('\n');

    swamp(t,x,y);

    printf("Getal 1 = %d\n",x);
    printf("Getal 2 = %d\n",y);

    return 0;
}
/* Deze programma wisselt 2 getallen met behulp van een macro
 * @ param = int t
 * @ return = void
 */


