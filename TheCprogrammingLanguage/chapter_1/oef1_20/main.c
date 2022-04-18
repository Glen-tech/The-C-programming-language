#include <stdio.h>
#include <stdlib.h>

void voegtoe(int,int);

int main(void)
{
   int c = 0;
   int i = 0;
   int b = 0;
   int tabstop = 7 ;

   printf("a\tb\n");
   printf("123456789\n");
   printf("\tc\n");
   printf("123456789\n");

   while((c = getchar()) != EOF)
   {
         putchar(c);

            if(c != '\t')
            {
             i++;

            }

             if(c == '\t') // bug niet gevonden
             {
                tabstop = 7;

                         for (b = 0; (b <= (tabstop)-(i)); b++)
                         {
                            putchar('\b');
                         }


                         for (b = 0 ;(b <= (tabstop-(i))); b++)
                         {

                            putchar('1');
                         }
                b = 0;
                i = 0;

             }

  }
return 0;
}
/*
*Deze code zet u tab om in spaties oftewel 1nen // bug bij eerste tab
*@param : int c
*@return : is void
*/



