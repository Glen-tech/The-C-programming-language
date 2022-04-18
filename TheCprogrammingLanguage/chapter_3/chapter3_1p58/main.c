#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX  5

int binscreach(int , int[], int );

int main()
{
    int string[MAX];
    int uitkomst = 0;
    int a = 0;
    int b = 5;

    printf("Geef uw reeks in\n");

    for (int i = 0; i <= (MAX-1); i++)
    {
        scanf("%d",&string[i]);

        if(isalpha(string[i]))
        {
            printf("Geen getal werd ingegeven. Einde programma\n");
            exit(0);
        }

    }

    printf("Geef de getal in wat u wilt zoeken in de lijst\n");
    scanf("%d", &a);
    uitkomst = binscreach(a,string,b);
    printf("positie vanaf 0 = %d\n", uitkomst);

    return 0;
}

int binscreach(int x , int v[], int n)
{
    int low= 0;
    int high = 0;
    int mid = 0;

    high = n-1;

    printf("x = %d\n", x);

    while(low <= high)
    {
        mid = (low+high)/2;
        printf("Mid = %d\n", mid);

               if (x > v[mid])
                {
                    low = mid + 1;
                }
                    else
                        {
                        printf("Getal is aanwezig\n");
                        return mid;
                        }
    }
    return -1;
}
