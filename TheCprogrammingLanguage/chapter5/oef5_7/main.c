#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

static char p[MAX];

int main()
{

    char*n[3];
    int i = 0;
    *n = (char*)malloc(3* sizeof(char));

    for (i = 0; i <= 2;i++)
    {
        fgets(p, 10 , stdin);
        printf("addres array = %d\n",&p[i]);
        printf("%s\n",p);
        n[i]= &p[i];
        printf("addres pointer array = %d\n",n[i]);
    }

        printf("addres array = %s\n",n[0]);

    free(n);
    return 0;

   }
