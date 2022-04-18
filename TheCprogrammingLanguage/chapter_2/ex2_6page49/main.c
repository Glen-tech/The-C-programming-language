#include<stdio.h>

#define MAX 8

unsigned setbits(unsigned x,int p,int n,unsigned y);

int main(void)
{
    unsigned int x = 255 ;

    unsigned uitkomst =  0 ;
    unsigned int b = 1;
    int t = 1;
    unsigned int mask= 0b10000000000000000000000000000000;
    b = b | mask;

    x = setbits((unsigned)x,3,4,(unsigned)0);

    while(t < sizeof(unsigned int)*MAX) // stopt wanneer bit groter is dan getal = 32
            {
                b = b >> 1;// 1 bit terug naar links

                uitkomst = x&b ; // kijkt wanneer 1 of 0 is

                if(uitkomst > 0)// voor 8 bits int * 2 of cijfer 8 in while statement
                {
                    printf("1");
                }
                    else
                    {
                        printf("0");
                    }
                t++;
               }

    printf("\nsetbits = %u\n",x);

}

unsigned setbits(unsigned x,int p,int n,unsigned y)
{
    return (x & ~(~(~0 << n) << (p+1-n)) | ( y & ~(~0<<n)) << (p+1-n));// uitleg code : http://www.learntosolveit.com/cprogramming/Ex_2.6_setbits.html
}

/*Deze programma test de functie set bits
*@ param = unsigned int x
* @ return = void
*/
