#include <stdio.h>
#include <stdlib.h>

#define  MAX    1000
#define  MAXS   10
#define  TAB    8

void tab(int);
void spatie(int);

int main()
{

    int t = 0;
    int c = 0;
    int l[MAX];
    printf("Druk op een karakter voor het programma te laten stoppen \n");

    while((c =getchar()) != EOF)
    {
        t++;
        l[t] = c;

          if(c == '\n')
                   {
                            t--;
                            printf("\nHoeveelheid karakters = %d\n" , t);
                            tab(t);
                            spatie(t);
                            t = 0;

                    }

                     else if( c != ' ' && c != '\n')
                          {
                              printf("Karakter gevonden, einde programma\n");
                              break;
                          }

    }


 printf("teller = %d\n",t);
 return 0;
}

void tab(int a )
{
   int s = 0;
   int t = 0;

   if((a % TAB) == 0 || (a % TAB) != 0 )
       {
        a /= TAB;
        putchar('\n');
        for (s = 1; s <= a; s++)
               {
               t++;
                putchar('|');
               }

         printf("  <-  Hoeveelheid tabs = %d\n" , t);
       }
}

void spatie(int e)
    {
    int b = 0;
    int t = 0;

    if((e % TAB) < MAXS)
    {
        e %= TAB ;
        putchar('\n');
        for (b = 1 ; b <= e; b++)
            {
            t++;
                putchar('-');
            }
    }


         printf(" <-  Hoeveelheid lege spaties= %d\n" , t);
         putchar('\n');
    }
/*Deze programma zet jou lege lijnen om in spaties en tabs
 * @param = int t
 * @return = void
 * */
