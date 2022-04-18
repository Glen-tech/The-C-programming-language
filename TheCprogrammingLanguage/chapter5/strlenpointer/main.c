#include <stdio.h>
#include <stdlib.h>

#define MAX     100
#define print(a,b,c)  printf("Uitkomst = %d\nWaarde array = %d\nUitkomst = %d" , a,b,(a-b));

int strlenp( char *);

int main()
{
    char array[MAX];
    int uitkomst = 0 ;

    printf("Geef uw string in\n");
    fgets(array,MAX,stdin);

    uitkomst = strlenp(array);

    return 0;
}

int strlenp(char *array)
{
    char *p = array ;
    while(*p != '\0')
    {
        p++;
        printf("p = %d\n",p);
    }

    putchar('\n');
    print(p,array,(p-array));

    return p - array;
}
/*Deze programma berekent de string op wijze van adressbepaling van de pointers
 * @param = array
 * @return is void;
 */
