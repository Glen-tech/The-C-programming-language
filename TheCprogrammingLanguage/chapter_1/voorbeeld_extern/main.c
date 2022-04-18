#include <stdio.h>
//extern wordt afgeraden , programma wordt moeilijker voor te bewerken
//neemt de nut van functies weg

#define MAXLINE 100
#define COPY    80


int max;
int z;
char line[MAXLINE];
char longest[MAXLINE];

int getline(void);
void copy(void);
void reverse(void); // oef1_19

int main()
{
    int len = 0;

    extern int max;
    extern int z;
    extern char longest[];


    while((len= getline() ) > 0)

        if(len>max)
        {
            max=len;
            copy();
        }

    if(max>0)
    {
     printf("%s",longest);
    }

    for (int i = 0 ; i<= MAXLINE; i++)
    {
        line[i] = 0 ;
        longest[i] = 0;
    }
    printf("\n");
    return 0;
}

int getline()
{
    int c,b,d = 0;
    extern char line[];
    extern int z;

    for(z=0; (z<MAXLINE-1)&&(((c=getchar())!=EOF)&&(c !='\n'));z++)
    {
        line[z] = c;

        if(c=='\n')
        {
            line[z]= c ;
            ++z;
        }

            else if(c == '\t' || c == '\r' ||c == '\f' || c == '\v') // oef1_18
            {
              z--;
            }


    }


    for (b = 0; b <= z; b++)// oef 1_17
    {

      if( line[b] == ' ')

          {
                  return z;
          }

              else if (line[b] != ' ')
                   {
                        break;
                   }

    }



    printf("kopie van de string = "); // oef1_16

    for (b = 0; b <= z; b++)
    {
        printf("%c",line[b]);

            if(b == z)
            {
                line[b] = '\0';
            }

     }

    reverse();

    //if(i >= COPY) // oef1_17
    // {
    //   printf("%c",s[b]);
    //  }


    printf("\nlengte string is = %d\n", z);//oef1_16

    return d;
}


void copy()
{
  int i = 0 ;
  int v = 0;
  extern char line[],longest[];

   printf("\nKopie in andere array = ");

   while((line[i]=longest[i])!='\0')
   {
       i++;
   }

           for (int i = 0; v <= i; v++)
           {
               printf("%c",longest[v]); // omdat het kan
           }

   putchar('\n');
}

void reverse() // oef1_19
{
    extern char line[];
    extern int z;
    printf("\nOmgekeerd =");

            for (int l = z ; l >= 0 ; l--)
            {
            printf("%c",line[l]);
            }
}
