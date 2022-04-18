#include <stdio.h>

#define MAX 100

void print(int,int);

int main()
{
 int i,c,woord;
 i=c=woord=0;
 int a = 1;

printf(" |1|2|3|4|5|6|7|8|9|10|\n");

while((c = getchar()) != EOF)
{
i++;
putchar(' ');
                 if(c == '\n' || c == '\t' || c == ' ' || c == '\0')

                 {
                     woord++;
                 }

                 if( a == woord)
                    {
                     printf("|*|\n");

                    woord = 0;
                    i = 0;
                   }
                         if(i > 2 && woord == 0 )
                         {
                             putchar(' ');

                         }

}

return 0 ;
}

// niet afgewerkt , te weinig ervaring oef14 ook niet

