#include <stdio.h>

#define MAXLINE 100
#define COPY    80

int getline(char line [],int maxline);
void copy(char to [],char from []);
void reverse(char draaien[], int); // oef1_19

int main()
{
    int len = 0;
    int max=0;
    int a = 0;

    char line[MAXLINE],longest[MAXLINE];

    while((len= getline(line,MAXLINE)) > 0)

        if(len>max)
        {
            max=len;
            copy(longest,line);
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

int getline(char s[],int lim)
{
    int c,i,b = 0;

    for(i=0; (i<lim-1)&&(((c=getchar())!=EOF)&&(c !='\n'));i++)
    {
        s[i] = c;

        if(c=='\n')
        {
            s[i]= c ;
            ++i;
        }

            else if(c == '\t' || c == '\r' ||c == '\f' || c == '\v') // oef1_18
            {
              i--;
            }


    }


    for (b = 0; b <= i; b++)// oef 1_17
    {

      if( s[b] == ' ')

          {
                  return i;
          }

              else if (s[b] != ' ')
                   {
                        break;
                   }

    }



    printf("kopie van de string = "); // oef1_16

    for (b = 0; b <= i; b++)
    {
        printf("%c",s[b]);

            if(b == i)
            {
                s[b] = '\0';
            }

     }

    reverse(s,i);

    //if(i >= COPY) // oef1_17
    // {
    //   printf("%c",s[b]);
    //  }


    printf("\nlengte string is = %d\n", i);//oef1_16

    return i;
}


void copy(char to[],char from[])
{
  int i = 0;
   printf("\nKopie in andere array = ");

   while((to[i]=from[i])!='\0')
   {
       i++;
   }

           for (int v = 0; v <= i; v++)
           {
               printf("%c",from[v]); // omdat het kan
           }

   putchar('\n');
}

void reverse(char z[], int b) // oef1_19
{
    printf("\nOmgekeerd =");

            for (int l = b ; l >= 0 ; l--)
            {
            printf("%c",z[l]);
            }
}
