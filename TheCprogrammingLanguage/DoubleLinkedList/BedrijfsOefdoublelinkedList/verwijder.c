#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gegevens.h"

struct tel
{
    int teller:2; // 2bits nodig voor optel te kunnen doen
};

void deleteLeverancier(struct leveranciers **head_ref)
{
    struct tel bool;

    char *leveranciers = NULL;
    leveranciers = (char*)malloc(sizeof(30));

       if (leveranciers  == NULL)
       {
           printf("No memory\n");
          return;
       }

       while (fgets(leveranciers, 30, stdin) != NULL  && bool.teller != 1)
               {
                      bool.teller++;
               }
       printf("%s",leveranciers);


    // Store head node
    struct leveranciers* temp = *head_ref, *prev;

    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->naam == leveranciers)
    {
        *head_ref = temp->next;   // Changed head
        free(temp);               // free old head
        return;
    }

    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->naam != leveranciers)
    {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    if (temp == NULL)  return;

    // Unlink the node from linked list
    prev->next = temp->next;

    free(temp);  // Free memory*/
}
