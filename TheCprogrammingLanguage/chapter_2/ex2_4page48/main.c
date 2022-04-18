#include <stdio.h>
#define     MAX     20

void squeze(char [], char [] );
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

   squeze(string1,string2);

    return 0;
}

void squeze(char s1[] , char s2[])
{
    int i = 0;
    int j = 0;

    for (i = 0 ; s1[i] != '\0' && s2[j] != '\0' ;i++)
    {
        if(s1[i] == s2[j]) // gelijke karakters worden verwijderd
        {
            s2[j] = s1[i];
            printf("%c\n",s1[j]);
            j++;// volgende karakters worden vergeleken van s2
            s1[i]= ' ';// en vervangen in s1 als een lege spatie
        }
    }
   printf("String 1 = %s\n",s1);
}
/* Deze programma verwijderd bestaande karakters van S1 wat in S2 ook voorkomt
 * @param = string1
 * @return = void
 */
