#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct enter
{
    int cijfer;
    char *naam;
    struct enter *next;
};

void printlist(struct enter *);
void printnaam(struct enter *);
void next(struct enter* , int );

struct enter * head ;
struct enter * tweede;
struct enter * derde;

int main()
{
   head = (struct enter *)malloc(sizeof(struct enter));
   tweede =(struct enter *)malloc(sizeof(struct enter));
   derde =(struct enter*)malloc(sizeof(struct enter));

   head -> cijfer = 1;
   head  -> next = tweede;

   tweede -> cijfer = 78;
   tweede -> next = derde ;

   derde -> cijfer = 4;
   derde -> next = NULL;

   printlist(head);

   head -> naam = "glen";
   head -> next = tweede;

   tweede -> naam = "julie";
   tweede -> next = derde ;

   derde -> naam = "Vincent";
   derde -> next = NULL;

   printnaam(head);

   free(head);
   free(tweede);
   free(derde);
   printf("Einde programma");

}


void printnaam(struct enter *n)
{
    while(n != NULL)
    {
    printf("naam = %s\n", n->naam);
    n = n -> next;
    }
}

void printlist(struct enter *n )
{
    while(n != NULL)
    {
    printf("data = %d\n", n->cijfer);
    n = n -> next;
    }
}
