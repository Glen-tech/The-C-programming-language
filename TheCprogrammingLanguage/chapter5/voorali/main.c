#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define     MAX     10

void print(char *);

int main()
{
    char array[MAX];
    fgets(array,MAX,stdin);
    print(array);

    return 0;
}

void print(char *s)
{
        printf("%s",s);
}
