#include <stdio.h>
#define BUFSIZE 100

static char buf[BUFSIZE]; // met static is er geen conflict met andere files met dezelfde variabele (naam is ontzichtbaar)
static int bufp = 0;

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if(bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
    {
        buf[bufp++] = c;
    }
}
