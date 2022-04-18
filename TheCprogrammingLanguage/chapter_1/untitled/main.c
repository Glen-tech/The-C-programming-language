#include <stdio.h>

int main()
{
    int c = 0 ;

    while((c = getchar()) != EOF )
    {

          if (c == '\t') // tab
            {
                putchar('\\');// \t word niet uitgeprint \\t => \t
                putchar('t');
            }

                else if(c == '\b') // backspace
                {
                    putchar('\\');
                    putchar('b');
                }

                else if(c == '\\') // backslash
                {
                    putchar('\\');
                }

                  else
                       {
                         putchar(c);

                       }

    }
    return 0;
}
