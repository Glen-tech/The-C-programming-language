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


int findNode(struct node* n ,int  number)
{
    int count = 0;

    while(n != NULL)
    {
        count++;
        n = n -> next;
           if(count == number)
           {
           return n -> data;
           }
    }

    printf("Index number doenst exist :( \n\r");
    exit(0);
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

    int index = 0;

   // push(&head , 10);
    head ->data = 10;
    head -> next = first;

    first -> data = 10;
    first -> next = second;

    second -> data = 16;
    second -> next = thirth;

    thirth -> data = 25;
    thirth -> next = fourth;

    fourth-> data = 36;
    fourth -> next = NULL;


    printf("Give index value ");
    scanf("%d",&index);

    printf("Value is %d \n",  findNode(head , index));


    return 0;
}
