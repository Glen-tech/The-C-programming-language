#include <stdio.h>
#include <stdlib.h>

#define     MAX     3

enum cijfers {A = 10 , B , C ,D , E , F}; // B = 11 ----F = 15

void omzet(char []);
void boventien(int,int, int);

int main()
{
  char s[MAX];

  printf("Geef uw hexadecimale waarde in(2 cijfers) \n");

  for (int i = 0 ; i <= MAX; i++)
  {
      scanf("%c", &s[i]);

        if(s[i] == '\n')
        {
             break;
        }

            else if(i == 2)
            {
                printf("Overflow , Einde programma\n");
                exit(0);
            }
  }

  printf("Waarde = 0x%s\n", s );

  omzet(s);

  return 0;
}

void omzet(char s[])
{
    short waarde = 0;
    short waarde2 = 0;

    for(int i = 0 ; s[i] >= '0' && s[i] <= 'F' ; i++ )
    {

        if(i == 0 && s[i] < 'A')
            {
                waarde = ((10 * waarde + (s[i] - '0'))*16); // formule omzetting char naar integer ;
            }//waarde in formule was eerst uitkomst, 0 van waarde werkt ook

                   else if (i == 1 && s[i] < 'A')
                        {
                            waarde2 = s[i]-'0';// s[i] - '0' geeft value van de string weer
                        }

         if(i == 0 && s[i] >= 'A')
           {
                waarde= (10 * waarde + (s[i] - '0')-7);
                waarde <<=  4;
           }

                    else if( i == 1 && s[i] >= 'A' )
                         {
                              waarde2= (10 * waarde2 + (s[i] - '0')-7);
                         }
    }

    printf("Integer waarde is %d\n",(waarde+waarde2));// was eerst uitkomst , dit gaat ook
}
/* Deze programma zet u hexadecimale waarde om in integer
 * &param = int i
 * &return = void
 */

