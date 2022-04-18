#include <stdio.h>
#include "header.h"

int main()
{

    struct user bucky;
    struct user emily;

    bucky.userid = 1;
    emily.userid = 2 ;

    puts("Enter the first name of user 1");
    gets(bucky.firstname);

    puts("Enter the first name of user 2");
    gets(emily.firstname);

    printf("User 1 id is  %d\n", bucky.userid);
    printf("User 2 id is  %d\n", emily.userid);

    printf("Name 1 id is  %s\n", bucky.firstname);
    printf("Name 2 id is  %s\n", emily.firstname);


    return 0;
}
