#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void push(struct node** head_ref, int new_data)
{
    /* 1. allocate node */
    struct node* new_node = (struct node*)malloc(sizeof(struct node)); // nieuwe node maken
    new_node -> data = new_data; // zetten van de data
    new_node -> next = (*head_ref); // koppel de nieuwe node aan de volgende
    new_node -> prev = NULL; // de vorige van deze nieuwe node is nu gelijk aan null

        if((*head_ref) != NULL)
        {
           (* head_ref )-> prev = new_node; // de vorige van head_ref is nu de nieuwe node
        }

     (*head_ref) = new_node; // bij aanmaak volgende , positie head_ref is nu bij de nieuwe node

}

/* Given a node as prev_node, insert a new node after the given node */
void insertAfter(struct node* prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        printf("the given previous node cannot be NULL");
        return;
    }

    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;

    new_node->prev = prev_node;


    if (new_node->next != NULL)
    {
        new_node->next->prev = new_node;
    }
}

/* Given a reference (pointer to pointer) to the head
   of a DLL and an int, appends a new node at the end  */
void append(struct node** head_ref, int new_data)
{/* 1. allocate node */
            struct node* new_node = (struct node*)malloc(sizeof(struct node));
            struct node* last = *head_ref;

            new_node->data = new_data;
            new_node->next = NULL;

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

            return;
}


void printList( struct node *node)
{
    struct node *reverse =  (struct node*)malloc(sizeof(struct node));

    while(node != NULL)
    {
        printf("%d " , node -> data);
        reverse = node; // reverse is nu gelijk aan node , gaat bij volgende op het einde beginnen
        node = node -> next;
    }

    while(reverse != NULL)
    {
        printf("%d " , reverse-> data);
        reverse = reverse -> prev; // Begin bij het einde , gaat nu naar achter
    }

}

int main()
{
        struct node *head = NULL;

        append(&head, 17);
        append(&head, 11);
        append(&head, 41);

        push(&head, 7);
        push(&head, 1);
        push(&head, 4);

        printList(head);

        return 0;
}
