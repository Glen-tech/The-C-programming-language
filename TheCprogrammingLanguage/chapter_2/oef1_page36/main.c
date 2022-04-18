#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{

    printf("Waardes basis datatypes . Voor float en double werd bibliotheek float.h gebruikt\n\n");

    printf("Minimum waarde van signed int = %d \n", INT_MIN);
    printf("Maximum waarde van signed int =%d \n", INT_MAX);
    printf("Maximum waarde van unsigned int = %u\n\n",UINT_MAX);

    printf("Minimum waarde signed char = %d \n" , SCHAR_MIN);
    printf("Maximum waarde signed char = %d \n", SCHAR_MAX);
    printf("Maximum waarde unsigned char = %d\n\n", UCHAR_MAX);

    printf("Minimum waarde signed short int= %d \n", SHRT_MIN);
    printf("Maximum waarde signed short int= %d \n", SHRT_MAX) ;
    printf("Maximum waarde unsigned short int= %d\n\n", USHRT_MAX);

    printf("Minimum waarde signed long int= %ld \n", LONG_MIN);
    printf("Maximum waarde signed long int= %ld \n", LONG_MAX) ;
    printf("Maximum waarde unsigned long int= %ld\n\n", ULONG_MAX);

    printf("Minimum waarde float= %f \n", FLT_MIN);
    printf("Maximum waarde float= %f\n\n", FLT_MAX) ;

    printf("Minimum waarde double = %lf \n", DBL_MIN);
    printf("Maximum waarde double= %lf \n", DBL_MAX) ;


    return 0;
}
