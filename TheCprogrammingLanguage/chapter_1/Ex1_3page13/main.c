#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

int main()
{
    double fahr , celsuis = 0;
    fahr = LOWER ;

    printf("Fahr \t| celsius\n");
    while(fahr <= UPPER)
    {
        celsuis = ((5.0/9.0) * (fahr - 32.0));
        printf("%3.0f \t| %6.1f \n ", fahr , celsuis);
        fahr += STEP ;
    }
    return 0;
}
