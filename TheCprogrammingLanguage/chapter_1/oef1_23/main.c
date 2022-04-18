#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BESTAND "C:\\Users\\11800025\\Documents\\Cprogramma\\TheCprogrammingLanguage\\fileparhsing\\oef1.c"
#define NIEUW "C:\\Users\\11800025\\Documents\\Cprogramma\\TheCprogrammingLanguage\\fileparshing\\nocomment.txt"
#define MAX 500

void start(FILE*,FILE*);
void karakters(FILE*, FILE*);
void verwijder(FILE*,FILE*,char*);


int main()
{
    FILE *pointer = fopen(BESTAND,"r");
    FILE *nieuw = fopen(NIEUW , "w");

        if(pointer == NULL )
        {
            printf("Daar is iets misgelopen , einde programma\n");
            exit(0);

        }
            else
            {
                printf("Files zijn geopend \n");
            }
    karakters(pointer,nieuw);
    fclose(pointer);
    fclose(nieuw);
    return 0;
}

void karakters(FILE*origineel, FILE*bestand )
{

    char *d = NULL;
    int i = 0;
    d = (char*)malloc(MAX);
 while(fgets(d,MAX,origineel) != NULL)
 {
   i++;
   printf("%s",d);
   if(strstr(d , "/*") != NULL)
   {
       printf("gelukt");
       d[i] = ' ';
       printf("%s",d);
   }
 }
free(d);
    // printf("Aantal karakter bestand = %d\n", t);
    // printf("Aantal lijnen bestand= %d\n", t2);

}





