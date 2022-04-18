#include <stdio.h>
#include <stdlib.h>

#define MAX     1000

void counter(int,int **a);
void enter(int,int **b);
void verwijder(int*,int **c);

int main()
{
    int c = 0;
    int t = -1;
    int l[MAX];

    int **i = (int**)malloc(MAX);

    while((c = getchar()) != EOF)
    {
      t++;
      l[t] = c;
      i[t] = &l[t];

          if(*i[t] == '\n')
          {
              counter(t,i);
          }
    }
    return 0;
}

void counter(int teller,int *a[])
{
    int *t3 = NULL;
    int *t2 = NULL;
    int i = 0;
    int teller2 = 0;
    printf("\nFunctie counter \n");

    t2 = (int*)malloc(sizeof(teller2));
    t3 = (int*)malloc(sizeof(teller));

    t3 = &teller;
    t2 = &teller2;

        for(i = 0; i <= *t3 ; i++)
        {
            if(*a[i] != ' ')
            {
                printf("%c",*a[i]);
            }

                else if(*a[i] == ' ')
                {
                    (*t2)++;
                    putchar(' ');

                            if(((*t2) % 3) == 0)
                            {
                                putchar('\n');
                            }
                }

        }

        *t2 = 0;
        verwijder(t3,a);
        free(t2);
}

void verwijder(int *counter , int *c[])
{
    for(int i = 0; i <= *counter ; i++)
    {
        *c[i] = '\b';
        free(c);
    }
*counter = 0;
free(counter);
}
