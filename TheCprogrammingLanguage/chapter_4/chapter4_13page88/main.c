#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100
int reverse(char[], int );

int main()
{
    char string[MAX];
    int i = 0;
    int d = 0;

    printf("Geef uw string in\n");
    fgets(string,MAX,stdin);
    i = strlen(string);
    reverse(string, i);

    printf("\nReturn  is %d\n",d);
    printf("\nSucces\n");

    return 0;
}

int reverse(char s[] , int b)
{
    b--;

    if(b < 0)
    {
        return 0;
    }
    printf("%c",s[b]);
    reverse(s,b);

    return -1 ;
}


/* Deze programma test recursie in c
 * @ param = string[MAX]
 * @ return = vanalles
 */
