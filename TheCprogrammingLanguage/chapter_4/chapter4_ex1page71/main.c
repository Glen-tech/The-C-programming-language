#include <stdio.h>
#include <string.h>

#define MAX 100

int strindex(char[],char);

int main()
{

    char string[MAX];
    char letter = 0;
    int positie = 0;

        printf("Geef uw string in\n");
        fgets(string,MAX,stdin);

        printf("Geef uw letter in \n");
        scanf("%c",&letter);

    positie = strindex(string,letter);

        printf("\nUw string is %s\n",string);

        (positie > 0 || positie == 0) ? printf("Uw positie is %d\n", positie) : printf("Niks gevonden = %d\n",positie);

    return 0;
}

int strindex(char s[],char t)
{
    int i = 0;

      printf("\nUw letter is = %c\n",t);

        for (i = 0 ; i <= strlen(s); i++)
        {
           if(s[i] == t)
           {
               i += 1;
               return i;
           }
        }

 return -1;
}

/* Deze programma zoekt een letter in een gegeven string
 * @param = string
 * @return = i of -1 ;
 */
