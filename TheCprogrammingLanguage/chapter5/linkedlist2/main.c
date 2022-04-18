#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "print.h"
#include "werknemers.h"

enum data{Werknemers = 'W' , Leverancier = 'L' , Klanten = 'K' ,Einde = 'E'};

void werknemers(void);

int main()
{

   char ingave [20];
   int i = 0;
   printf("Geef W in voor werknemers , L voor Leveranciers ,K voor klanten en E voor einde programma");
   fgets(ingave ,20,stdin);
   i = atoi(ingave);

while(1)
{

   switch(i)
   {
       case Werknemers:
       werknemers();
       break ;

       case Einde:
       exit(0);
       break;


   }

}
   printf("Einde programma \n");
}

