#include<stdio.h>
#define MAX 8

unsigned getbits(unsigned x , int p , int n );

int main(void)
{
    unsigned int x = 255 ;
    unsigned uitkomst =  0 ;
    unsigned int b = 1;
    int t = 1;
    unsigned int mask= 0b10000000000000000000000000000000;

    b = b | mask;
    x = getbits(x , 4, 3);

    while(t < sizeof(unsigned int)*MAX) // stopt wanneer bit groter is dan getal = 32
            {
                b = b >> 1;// 1 bit terug naar links
                uitkomst = x&b ; // kijkt wanneer 1 of 0 is

                if(uitkomst > 0)
                {
                    printf("1");
                }
                    else
                    {
                        printf("0");
                    }
                t++;
               }

    printf("\nx = %u\n",x);
    return 0;
}

unsigned getbits(unsigned x , int p , int n)
{
return  (x >> (p + 1 -n )) & ~(~0 << n);  // x = 00111111 , ~0 = 1111 , (~0 << n )= 111000 , ~(~0 << n ) = 000111 , x & ~(~0 << n)  = 000111
}

/*Deze programma test de functie getbits in C
*@param = unsigned int x
*@return = void
*/
