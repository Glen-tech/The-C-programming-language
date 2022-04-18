#include <stdio.h>
#define     MAX     20

char eerste_k(char [], char [] );
int main()
{
   char string1[MAX];
   char string2[MAX];
   int i = 0;

   printf("Geef uw eerste string in \n");

           for (i = 0; i <= MAX; i++)
           {
               scanf("%c",&string1[i]);

                if(string1[i] == '\n')
                {
                      break;
                }
           }

   printf("Geef uw 2de string in \n");

           for (i = 0; i <= MAX; i++)
           {
               scanf("%c",&string2[i]);

                   if(string2[i] == '\n')
                   {
                         break;
                   }
   }

   printf("String 1 = %s\n",string1);
   printf("String 2 = %s\n",string2);

   eerste_k(string1,string2);

    return 0;
}

char eerste_k(char s1[] , char s2[])
{
    int i = 0;
    int j = 0;
    char a = 0;

    for (i = 0 ; s1[i] != '\0' && s2[j] != '\0' ;i++
         )
    {
            if(s1[i] == s2[j])
            {
              s2[j] = s1[i];
              j++;
              printf("Eerste karakter %c\n", s1[i]);
              return a;
            }
    }

   printf("Geen karakters gevonden\n%d\n", EOF);
   return a;
}
/* Deze programma doet hetzelfde als strpbrk , het geeft de eerste gelijke karakterwaarde terug van string2 . Is er geen gelijke karakterwaarde word er -1 terug gegeven
 * @param = string1
 * @return = void
 */
