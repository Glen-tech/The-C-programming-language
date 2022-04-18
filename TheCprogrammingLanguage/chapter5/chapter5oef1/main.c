#include <stdio.h>
#include <string.h>
#define MAX 10

void strcatty(char* ,char*);

int main()
{
    char array[MAX];
    char array2[MAX];

    printf("Geef uw eerste string in\n");
    fgets(array,MAX,stdin);

    printf("Geef uw 2de string in\n");
    fgets(array2,MAX,stdin);

    strcatty(&array,&array2);

    return 0;
}

void strcatty(char* s, char* t)
{
    int i = 0;

    while(*s++ != '\0')
    {
        i++;
        printf("adres s loop1: %d\n",s);
    }
    s-=1;
    while((*s++ = *t++) != '\0')
    {
        i++;
        printf("adres s loop2: %d\n",s);
    }
    s--;
    printf("Groote s = %d\n",i);
    s -= i;
    printf("adres s uitkomst: %d\n",s);
    printf("string s uitkomst: %s\n",s);

}
