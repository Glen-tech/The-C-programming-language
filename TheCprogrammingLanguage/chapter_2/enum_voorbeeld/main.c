#include <stdio.h>

enum boolean {NO,YES}; // NO = 0 , YES = 1;
enum escapes{BELL = '\\a', BACKSPACE = '\\b', TAB = '\\t',NEWLINE = '\\n',VTAB = '\\v', RETURN = '\\r' };
enum maanden{JAN= 1 , FEB , MAR, APR,MEI,JUN,JUL,AUG,SEP,OKT,NOV,DEC};

int main()
{
    printf("Enum Boolean\n\n");
    printf( "boolean = %d\n", NO);
    printf( "boolean = %d\n\n", YES);

    printf("Enum Escapes functies\n\n");
    printf("Bell = %c\n", BELL);
    printf("Backspace =%c\n", BACKSPACE);
    printf("Tab = %c\n", TAB);
    printf("Newline = %c\n",NEWLINE);
    printf("Vtab = %c \n", VTAB);
    printf("Return = %c\n\n",RETURN);

    printf("Enum de maanden van het jaar\n\n");
    printf("Januarie= %d \nFebruarie = %d \nMaart = %d \nApril = %d \nMei = %d \nJuni = %d \njuli = %d\n" , JAN,FEB,MAR,APR,MEI,JUN,JUL);
    printf("Augustus = %d \nSeptember = %d \nOktober = %d \nNovember = %d \nDecember = %d\n\n", AUG,SEP,OKT,NOV,DEC);

    return 0;
}

/* Deze programma test de functie enum uit
 * @param = enum
 * @return = void
 */
