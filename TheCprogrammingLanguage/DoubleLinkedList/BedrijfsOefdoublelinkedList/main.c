#include <stdio.h>
#include <stdlib.h>
#include "gegevens.h"
#include "verwijder.c"

void pushLeveranciers(struct leveranciers **head, char *naam , char *straat , char *dorp)
{

     struct leveranciers* new_node = (struct leveranciers*)malloc(sizeof(struct leveranciers)); // nieuwe node maken
     new_node -> naam = naam;
     new_node -> straat = straat;
     new_node -> dorp   = dorp;

     new_node -> next = *head;
     new_node -> prev = NULL;

     if((*head) != NULL)
     {
         (*head) -> prev = new_node;
     }

     *head = new_node;

}

void pushKlanten(struct klanten **head, char *naam , char *straat , char *dorp)
{

     struct klanten* new_node = (struct klanten*)malloc(sizeof(struct klanten)); // nieuwe node maken
     new_node -> naam = naam;
     new_node -> straat = straat;
     new_node -> dorp   = dorp;

     new_node -> next = *head;
     new_node -> prev = NULL;

     if((*head) != NULL)
     {
         (*head) -> prev = new_node;
     }

     *head = new_node;

}


void pushWerknemers(struct werknemers **head_ref , char *naam , char *functie , float loon , int jarenDienst)
{
     struct werknemers* new_node = (struct werknemers*)malloc(sizeof(struct werknemers)); // nieuwe node maken
     new_node -> naam   = naam;
     new_node -> functie = functie;
     new_node -> loon     = loon;
     new_node-> jarenDienst = jarenDienst;

     new_node -> next = *head_ref;
     new_node -> prev = NULL;

     if((*head_ref) != NULL)
     {
         (*head_ref) -> prev = new_node;
     }

     *head_ref = new_node;

}

void printWerknemers(struct werknemers *node)
{

    printf("Lijst werknemers\n");
    while(node != NULL)
    {
        putchar('\n');
        printf( "Naam = %s \nFunctie =  %s\nloon = %.2f \nJaren Dienst = %d\n", node -> naam , node -> functie , node -> loon , node -> jarenDienst);
        putchar('\n');
        node = node -> next;
    }
}

void printLeveranciers(struct leveranciers *node)
{

    printf("Lijst Leveranciers\n");
    while(node != NULL)
    {
        putchar('\n');
        printf( "Naam = %s \nStraat = %s\nDorp = %s\n",node-> naam , node -> straat , node -> dorp);
        putchar('\n');
        node = node -> next;
    }
}

void printKlanten(struct klanten *node)
{

    printf("Lijst klanten\n");
    while(node != NULL)
    {
        putchar('\n');
        printf( "Naam = %s \nStraat = %s\nDorp = %s\n",node-> naam , node -> straat , node -> dorp);
        putchar('\n');
        node = node -> next;
    }
}


int main()
{
    struct werknemers *head_ref = NULL;
    struct leveranciers *head = NULL;
    struct klanten *hoofd = NULL;

    struct  gegevensWerknemers werknemers;
    struct  gegevensLeveranciers leveranciers;
    struct  gegevensKlanten klanten;


    int kies = 0;

    pushWerknemers(&head_ref ,"Glen" , "Klusjesman", 1600 , 5  );
    pushWerknemers(&head_ref ,"Stefan" , "Administatief bediende", 2200 , 24  );
    pushWerknemers(&head_ref ,"Ali" , "Administratief bediende", 1800 , 5  );
    pushWerknemers(&head_ref ,"Kris" , "Algemeen directeur", 3600 , 35  );
    pushWerknemers(&head_ref ,"Welsey" , "Magazijnier", 2400 , 25  );
    pushWerknemers(&head_ref ,"Merel" , "Heftruck Chauffeur", 1600 , 5  );
    pushWerknemers(&head_ref ,"Samo" , "Klusjesman", 1800 , 8  );
    pushWerknemers(&head_ref ,"Boeloe" , "Klusjesman", 1400 , 2  );

    pushLeveranciers(&head , "OmdatHetKan NV", "Nepstraat 1234" , "Dropje  154");
    pushLeveranciers(&head , "NietZoHeelMoeilijk NV", "SoortCodeKopie 1111" , "SoortPlagiaat 777");
    pushLeveranciers(&head , "WelDoenAli bvba", "SoortCodeKopie 5478" , "InspirtatieOp 174");

    pushKlanten(&head , "ZoNiet NV", "Nepstraat bojaka 4" , "DropjeKlopje  154");
    pushKlanten(&head , "NietInPot NV", "SoortCodeversieKopie 1441" , "SoortPlagiaatversie 777");
    pushKlanten(&head , "Welboekoe bvba", "SoortCodeKopie 78455525" , "InspirtatieHierOokOp 174");


    while(1)
    {
        printf("Kies 1 voor Werknemer toe te voegen \nKies 2 voor een Leverancier toe te voegen \nKies 3 voor klanten toe te voegen\n");
        printf("Kies 4 voor Werknemers uit te printen\nKies 5 voor Leveranciers uit te printen\nKies 6 voor klanten uit te printen\n");
        printf("Kies 7 voor een Werknemers te verwijderen \nKies 8 voor een Leverancier te verwijderen \nKies 9 voor een Klant te verwijderen\n");
        printf("Kies 10 voor Programma te stoppen\n");
        scanf("%d",&kies);

        switch(kies)
        {
                case 1:     printf("Geef naam van de werknemer in \n");
                                scanf("%s",werknemers.naam);
                                printf("Geef beroep van de werknemer in \n");
                                scanf("%s",werknemers.beroep);
                                printf("Geef loon van de werknemer in \n");
                                scanf("%f",&werknemers.loon);
                                printf("Geef jaren dienst van de werknemer in \n");
                                scanf("%d",&werknemers.jarenDienst);
                                pushWerknemers(&head_ref ,werknemers.naam, werknemers.beroep, werknemers.loon, werknemers.jarenDienst);
                break;


                case 2:
                                printf("Geef naam van de leverancier in \n");
                                scanf("%s",leveranciers.naam);
                                printf("Geef straat van de leverancier in \n");
                                scanf("%s",leveranciers.straat);
                                printf("Geef de dorp van de leverancier in \n");
                                scanf("%s",leveranciers.dorp);
                                pushLeveranciers(&head ,leveranciers.naam, leveranciers.straat, leveranciers.dorp);
                break;

                case 3:
                                printf("Geef naam van de klant in \n");
                                scanf("%s",klanten.naam);
                                printf("Geef straat van de klant in \n");
                                scanf("%s",klanten.straat);
                                printf("Geef de dorp van de klant in\n");
                                scanf("%s",klanten.dorp);
                                pushKlanten(&head ,klanten.naam, klanten.straat, klanten.dorp);
                break;

                case 4: printWerknemers(head_ref); break;
                case 5: printLeveranciers(head); break;
                case 6: printKlanten(hoofd); break;
                case 7: break;
                case 8: deleteLeverancier(head);  break;
                case 9: printKlanten(hoofd); break;
                case 10: exit(0);  break;

        }
    }

    return 0;
}
