#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "struct.h"
#include "print.h"

struct node *head = NULL;
struct node *eerst = NULL;
struct node *temp = NULL;

void werknemers()
{
    char n[20];
   //char job[20];
     float wedde = 0;
     int g = 0;

while (1)
{

    head  = (struct node*)malloc(sizeof(struct node));
    head->naam = (char *)malloc(strlen(n) + 1);
    head->voornaam = (char *)malloc((sizeof(head->voornaam) + 1));
    head -> beroep = (char *)malloc((sizeof(head -> beroep) + 1));
    //head -> beroep = (char *)malloc(strlen(n) + 1);

            printf("Geef naam in \n");
            scanf("%s",n);
            strcpy(head->naam , n);
            putchar('\n');

            printf("Geef voornaam in \n");
            scanf("%s",head->voornaam);
           // strcpy(head->voornaam , n);
            putchar('\n');

            printf("Geef leeftijd in\n");
            scanf("%d", &g);
            head -> num = g;
            putchar('\n');

            printf("Geef beroep in\n");
            scanf("%s", head -> beroep);
            //strcpy(head->beroep , job);
            putchar('\n');

            printf("Geef loon in\n");
            scanf("%f", &wedde);
            head -> loon = wedde;
            putchar('\n');


    if (eerst != NULL )
            {

                temp->next = head;
                temp = head;
                temp -> next = NULL;

            }

            else
                    {
                       eerst = temp = head ;
                     }
;

}

temp->next = NULL;
/*  reset temp to the beginning */

temp = eerst;

print(temp);

free(head);
}
