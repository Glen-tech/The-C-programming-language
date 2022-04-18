#include <stdio.h>
#define MAX 10

        void dalend(int [] , int);
        void stijgend(int [], int);
        void print(int[]);

    int main(void)
    {
        int getal = 0;
        int lijst[MAX];
        printf("Geef %d gehele getallen in:\n", MAX);

        for(int i = 0; i < MAX; i++)
        {
        scanf("%d", &getal);
        lijst[i] = getal;
        }

    dalend(lijst , getal);
    stijgend(lijst, getal);

    return 0;
    }

    void dalend(int l[],int g)
    {
        int t = 0;
        printf("Functie dalend\n");
        while(t < MAX)
        {
            for(int i= 0 , j = 1; i < MAX-1 ; j++,i++) // niet 100 % bij dalend
            {
                if(l[i] < l[j]) // omwissel getal
                {
                    g = l[i];
                    l[i] = l[j];
                    l[j] = g;
                }
            t++;
            }
        }
        print(l);
    }

    void stijgend(int st[] , int n)
    {
        int t = 0;
        printf("Functie stijgend\n");
        while(t < MAX)
        {
            for(int i= 0 , j = 1; i < MAX-1 ; j++,i++)

                if(st[j] < st[i]) // omwissel getal
                {
                    n = st[j];
                    st[j] = st[i];
                    st[i] = n;
                }
            t++;
        }
        print(st);
    }

        void print(int s[])
        {
            printf("Uw uitkomst\n");

                for(int i = 0; i < MAX; i++)
                    {
                        printf("%d\n", s[i]);
                    }
         }

/*Deze programma sorteerd de waarde van de string van stijgend naar dalend
 * @param = getal
 * @return = void
 */
