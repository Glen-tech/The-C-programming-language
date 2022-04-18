#include <stdio.h>
#include <string.h>

#define  MAX  100
#define  max(A,B,C)   fgets(A,B,C);

void groote(void);

int main(void)
{
    char a[MAX];
    char *p = NULL ;

    printf("Geef uw string in"); putchar('\n');
    max(a , MAX , stdin);

    p = &a[0]; //  p = a;

    for(int i = 0 ; i < strlen(a); i++)
    {
        printf("Inhoud plaats %d is %c \n" , i , *(p+i));
        //printf("Inhoud plaats %d is %c \n" , i , *(a+i));
       }
    groote();

    return 0;
}

void groote(void)
{
   char array[MAX] = {"hallo iedereen"};
   char *pointer = NULL;
   pointer = array ;

   printf("Groote van string constante ''hello world'' = %d\n", strlen("hello world"));
   printf("Groote van string constante char array [MAX] = %d\n", strlen(array));
   printf("In de string = %s\n", array);
   printf("Groote van pointer (string char array MAX) = %d\n", strlen(pointer));
   printf("In de pointer = %s\n",pointer);
   printf("Einde programma\n");

}
/*Deze programma test programmerings principes uit van pointers en arrays
 * @param = int i
 * @ return = is void
 */
