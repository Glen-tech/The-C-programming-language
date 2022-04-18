#include <stdio.h>
#include <stdlib.h>

void strcopy(char *);

int main()
{
    char array[] = "nu is de tijd";
    strcopy(array);

    return 0;
}

void strcopy(char *s)
{
    char *p = NULL;

    p = s ;

    printf("\npointer is %s\n", p);

}
