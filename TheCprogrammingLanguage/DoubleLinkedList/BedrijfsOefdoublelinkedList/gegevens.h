#ifndef GEGEVENS_H
#define GEGEVENS_H


struct werknemers
{
    char *naam;
    char *functie;
    float loon;
    int jarenDienst;

    struct werknemers *prev;
    struct werknemers *next;
};

struct klanten
{
    char *naam;
    char *straat;
    char *dorp;

    struct klanten *prev;
    struct klanten *next;

};

struct leveranciers
{
    char *naam;
    char *straat;
    char *dorp;

    struct leveranciers *prev;
    struct leveranciers *next;

};



struct gegevensWerknemers
{
    char naam[30];
    char beroep[30];
    float loon;
    int jarenDienst;
};

struct gegevensKlanten
{
    char naam[30];
    char straat[30];
    char dorp[30];
};


struct gegevensLeveranciers
{
    char naam[30];
    char straat[30];
    char dorp[30];
};

#endif // GEGEVENS_H
