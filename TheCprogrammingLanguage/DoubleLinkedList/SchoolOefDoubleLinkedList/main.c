#include <stdio.h>
#include <stdlib.h>

struct node
{
    char *naam;
    char *klas;
    int punten;

    struct node *next;
    struct node *prev;
};

void Listing(struct node ** head_ref , char *naam, char *klas, int punten)
{
    struct node *new_node =(struct node*)malloc(sizeof(struct node));
    struct node *last = *head_ref;

    new_node -> naam = naam;
    new_node -> klas = klas;
    new_node -> punten = punten;

    new_node -> next = NULL; // we gaan 1 hierna plaatsen , niet hiervoor

    if (*head_ref == NULL)
    {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_node;
    new_node->prev = last;
}

void printList(struct node *node)
{
    while(node != NULL)
    {
        printf( "Naam = %s \nKlas = %s \nPunten = %d\n" , node-> naam, node -> klas , node-> punten);
        node = node -> next;
    }
}

void gemiddeld(struct node *node)
{
    float som = 0;
    int teller = 0;

    while(node != NULL)
    {
        teller++;
        som += (node -> punten);
        node = node -> next;
    }

    putchar('\n');
    printf("Klasgemiddelde totaal = %.2f\n", som /= 5);

}

void Klas2EAC(struct node *node)
{
    int teller = 0;

    while(node != NULL)
    {
        if((node ->klas) == "2EAC")
        {
            teller++;
        }
        node = node -> next;
    }

    printf("Er zitten %d in 2EAC\n", teller);

}

int main()
{
    struct node *head_ref = NULL;

    Listing(&head_ref , "Ali" ,"2EAA", 12);
    Listing(&head_ref , "Glen" ,"2EAB", 12);
    Listing(&head_ref , "Kieran" ,"2EAC", 14);
    Listing(&head_ref , "Wesley" ,"2EAD", 13);
    Listing(&head_ref , "Eduardo" ,"2EAC", 12);

    printList(head_ref);
    printf("Wat is de totale klasgemiddelde\n\n");

    gemiddeld(head_ref);
    printf("Hoeveel mensen zitten in 2EAC\n\n");

    Klas2EAC(head_ref);

    return 0;
}
