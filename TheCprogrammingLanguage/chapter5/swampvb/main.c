#include <stdio.h>

void swamp(int *, int *);


int main()
{
    int a = 0 ;
    int b = 0 ;

    printf("Geef uw getallen in\n");
    printf("Getal 1 = "); scanf("%d",&a);
    printf("Getal 2 = "); scanf("%d",&b); putchar('\n');

    swamp(&a,&b);

    putchar('\n');
    printf("Getal 1 = %d\n",a);
    printf("Getal 2 = %d",b);
    putchar('\n');

    return 0;
}

void swamp(int *c , int *d)
{
    int t = 0 ;

    t = *c ;

  *c = *d;

  *d = t;
}

/* Deze programma wisselt 2 getallen met elkaar . Pointer gebruik komt aan bod.
 * &param = int a;
 * &return = int b ;
 */
