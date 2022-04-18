#include <stdio.h>
#include <string.h>

#define         MAX         20

void bereken(char s[MAX]);

int main()
{
    printf("Geef uw string in\n");
    char s[MAX];

   // gets(s); // spatie word meegenomen , scanf() neemt geen spaties mee , Er is wel buffer overflow met gets()
   // scanf("%[^\n]",s); ook overflow buffer

    for(int i = 0; i <= (MAX-1) ; i++)
    {
          scanf("%c", &s[i]);

            if(s[i] == '\n')
            {
                i--; // verwijdering /0
                break;
            }
     }

    bereken(s);

    return 0;
}

void bereken(char d[MAX])
{

    int i = 1 ;
    printf("%s\n",d);

            while(d[i] != '\0')
            {
                i++;
            }

   printf("\nEr zijn %d karakters in de string\n", i);

}

/*Deze programma is een zelfgemaakte strlen functie
 * @param = char s [max]
 * @return = void
 */
