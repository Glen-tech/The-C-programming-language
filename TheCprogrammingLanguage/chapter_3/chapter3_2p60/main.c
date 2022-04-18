#include <stdio.h>
#include <string.h>

#define     MAX     20

int escape(char [], char []);
int convert(char[],char []);

int main()
{
    char a[MAX];
    char b[MAX];

    escape(a,b);

        printf("String escape A = %s\n",a);
        printf("String escape B = %s\n",b);

    convert(a,b);

        printf("String convert A = %s\n",a);
        printf("String convert B = %s\n",b);

    return 0;
}

int escape(char s[], char t[])
{

int c = 0;
int i = 0;
int j = 0;

    for (i = 0 ; i  <= MAX; i++)
    {
     c = getchar();
     j++;
     s[i] = c;

              switch(c)
                {
                        case '\n':
                        s[i++] = '\\';
                        s[i]= 'n';
                        strcpy(t,s);
                        break;

                        case '\t':
                        s[i++] = '\\';
                        s[i] ='t';
                        strcpy(t,s);
                        break;

                        default :
                        strcpy(t,s);
                }
    }

return c ;
}

int convert(char b[], char c[])
{
    int i;

    for (i = 0 ; i  <= MAX; i++)
    {

        if( b[i] == '\\' && b[i+1] == 'n')
                {
                    b[i+1] ='\b';
                    b[i]='\n';
                    continue;
                }

                 else if( b[i] == '\\' && b[i+1] == 't') // eerste tab werkt niet ?
                  {
                     b[i+1]='\b';
                     b[i] ='\t';
                  }

         strcpy(c,b);
    }

    return i;
}
/*Deze programma converteerd 2 escape sequence in gewone karakters , daarna wordt het terug omgezet in escape sequences
 * &param = char[]
 * &return = void
 */
