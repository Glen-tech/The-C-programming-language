// kan ook met counters gedaan worden

#include <stdio.h>
#include <stdlib.h>
struct node{

    int data;
    struct node *next;

};

/*
void push(struct Node** head_ref, int new_data)
{
    //allocate node
    struct Node* new_node =
            (struct Node*) malloc(sizeof(struct Node));

    // put in the data
    new_node->data = new_data;

    //link the old list off the new node
    new_node->next = (*head_ref);

    //move the head to point to the new node
    (*head_ref) = new_node;
}*/

void printList(struct node *print)
{
    while(print != NULL)
    {
       printf("%d " , print -> data);
       print = print -> next;
    }

    putchar('\n');
}

void findMiddle(struct node* n)
{
    struct node *slowp = n;
    struct node *fastp  = n;

        while((fastp != NULL) && (fastp -> next != NULL)) // pointers to the rescue
        {
            fastp  = fastp -> next -> next;
            slowp = slowp -> next;
        }

    printf("middel is %d \n\r" , slowp -> data);

}

int main()
{
    struct node *head = NULL;
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *thirth = NULL;
    struct node *fourth = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    thirth = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));



   // push(&head , 10);
    head ->data = 15;
    head -> next = first;

    first -> data = 35;
    first -> next = second;

    second -> data = 250;
    second -> next = thirth;

    thirth -> data = 25;
    thirth -> next = fourth;

    fourth-> data = 36;
    fourth -> next = NULL;

    printList(head);
    findMiddle(head);


    return 0;
}
