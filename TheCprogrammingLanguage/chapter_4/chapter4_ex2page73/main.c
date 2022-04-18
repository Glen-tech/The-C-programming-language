#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

# define MAX 100

double mijnatof(char []);
double exponent(char[]);

int main()
{
    char string[MAX];
    double resultaat = 0;

    printf("Geef uw string in \n");
    fgets(string , MAX , stdin);

    resultaat = mijnatof(string);
    printf("Uw resultaat %lf\n", resultaat);

    return 0;
}

double mijnatof(char s[])
{
    double val , power;
    int i, sign;

    double ex = exponent(s);
    printf("\nexpo = %lf\n", ex);

    for (i = 0;isspace(s[i]); i++)// witte space gaat foetsie
    ;
        sign = (s[i] == '-') ? -1 : 1;

        if (s[i] == '+' || s[i] == '-' || s[i] == 'e' || s[i] == 'E')
            i++;

        for (val = 0.0; isdigit(s[i]); i++)

            val= 10.0 * val + (s[i]- '0');


        if(s[i] == '.')

            i++;

                for(power = 1.0 ; isdigit(s[i]); i++)
                    {
                        val = 10.0 * val + (s[i] - '0');
                        power *= 10.0;
                    }

        if(ex > 1)
        {
                return pow(val,ex) ;
        }

        return sign * val/power;
}
double exponent(char st[])
{
    char ex = 0;
    double expo = 0;

    for (int i = 0 ; i <= strlen(st); i++)
    {
       if ((st[i] == 'e' || st[i] == 'E') && st[i+1] == '-')
       {
           ex = st[i+2];
           expo = atof(&ex);
           printf("Exponent is %lf\n",expo);
           return expo ;
       }
    }
    return 1.0;
}


