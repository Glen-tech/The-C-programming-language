#include <stdio.h>
#define MAX 8

int BerekeningBepalingBit(unsigned int getal , unsigned int bit);

int main()
{
	unsigned int getal = 0;
	unsigned int bit = 1 ;
	
	printf("Geef u getal in\n");
	scanf("%u",&getal);
	
	BerekeningBepalingBit(getal,bit);
	
	return 0; 
}
/*Met deze functie zet je u getal binair om
*@param= unsigned int getal
*@return= is void, geen return
*/

int BerekeningBepalingBit(unsigned int g , unsigned int b )
{
	int teller = 1 ;
	unsigned int mask= 0b10000000000000000000000000000000;
	b = b | mask;
	
	unsigned int uitkomst = 0;
	int zero = 0;
	int one = 0;

	while(teller < sizeof(unsigned int)*MAX) // stopt wanneer bit groter is dan getal = 32 
		{
			b = b >> 1;// 1 bit terug naar links
			
			uitkomst = g&b ; // kijkt wanneer 1 of 0 is
	
			if(uitkomst > 0)// voor 8 bits int * 2 of cijfer 8 in while statement
			{
				printf("1");
			}
				else
				{
					printf("0");
				}
			teller++;
		}
	return 0;
}