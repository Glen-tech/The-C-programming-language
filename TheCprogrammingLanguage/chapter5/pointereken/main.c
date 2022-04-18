#include <stdio.h>

#define     print(a)    printf(#a " = %d\n",a)

int main()
{
    int x = 1 ; int  y = 2 ;

    int *ip = NULL ;

    int *iq = NULL ;

    ip = &x ;

    print(*ip);

   *ip = *ip + 10;

    print(*ip);

    y = *ip +  1 ; // van 2 naar 12

    print(y);

    *ip += 1 ;

    print(*ip);

    ++*ip;

    print(*ip);

    (*ip)++;

    print(*ip);

    (*ip)++;

    print(*ip);

    iq = ip;

    print(*iq);

    return 0;
}

/*Deze programma laat standaard bewerkingen zien van pionters
 * @param = int x ;
 * @ return = void ;
 */
