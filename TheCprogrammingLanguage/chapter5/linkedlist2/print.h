#include <struct.h>
#include <stdio.h>
#include <stdlib.h>

void print(struct node *tijdelijk)
{
    int teller = 0;
   while (tijdelijk != NULL)
   {
       teller++;
       printf("Werknemer %d\n",teller);
       printf("Naam = %s\n",tijdelijk->naam);
       printf("Voornaam = %s\n",tijdelijk->voornaam);
       printf("leeftijd = %d\n", tijdelijk->num);
       printf("Job = %s\n", tijdelijk->beroep);
       printf("Loon = %f\n", tijdelijk->loon);
       putchar('\n');

       tijdelijk = tijdelijk -> next;
   }

}
