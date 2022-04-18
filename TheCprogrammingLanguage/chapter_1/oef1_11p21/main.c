#include <stdio.h>

#define IN  1
#define OUT 1

int main()
{
    int c , nieuwelijn,nieuwewoord,nieuwcharacter , staat;

    staat = OUT ;
    nieuwelijn = nieuwewoord =  nieuwcharacter = 0;

    while((c = getchar()) != EOF)
    {
        nieuwcharacter++;

        if(c == '\n')
        {
            nieuwelijn ++;
            staat = OUT ;
        }

        else if(c == '0')
        {
            break;
        }

            if (c == ' ' || c == '\n' || c == '\t')
            {
                staat = IN;
                nieuwewoord++; // programma werkte niet met else if staat  , karakters werden meegeteld
            }

    }

   printf("Woorden = %d , karakters = %d , zinnen = %d\n", nieuwewoord,nieuwcharacter,nieuwelijn); // kleine bug bij 2 woorden met spatie en zonder enter, ook bij 1 woord zonder enter
}
/* Deze programma teld de karakter , woorden en zinnen op
 * @param = c
 * @return = void
 */
