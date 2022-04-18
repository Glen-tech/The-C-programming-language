#include <stdio.h>

int lower(int);
int positief(int);
int negatief(int);

int main()
{
   int d = 0;

   printf("Geef uw hoofdletter cijfer combinatie  in\n");
   scanf("%d",&d);

   d = lower(d);
   printf("\nGeinverteerde letter = %d\n",d);
   return 0;
}

int lower(int c)
{
    (c >= 'A' && c <= 'Z') ? positief(c): negatief(c);
}

int positief(int e)
{
    return e + 'a' - 'A';
}

int negatief(int e)
{
    return e ;
}
