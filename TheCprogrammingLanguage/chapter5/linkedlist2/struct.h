#include <stdio.h>
#include <stdlib.h>
#include "werknemers.h"

struct node
 {
     int num;
     char *voornaam;
     char *naam;
     char *beroep;
     float  loon;
     struct node *next;
 };
