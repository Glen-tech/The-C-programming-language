#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct node
{
  int data;
  struct Node *next;
};


void push(struct Node** head_ref, int new_data)
{
   struct node *new_node = (struct node*) malloc(sizeof(struct node)); // allocatie
   new_node -> data = new_data; // plaatsen van de data
   new_node -> next = (*head_ref); // koppelen volgende node
   (*head_ref) = new_node; // new_node is de volgende node
}

/* Given a node prev_node, insert a new node after the given
   prev_node */
void insertAfter(struct node* prev_node, int new_data)
{
    if(prev_node == NULL)
    {
        printf("Vorige ingave mag niet echt 0 zijn = einde programma\n\r");
        exit(0);
    }

    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> data = new_data; // plaatsen van de data
    new_node -> next = prev_node -> next; // de next element van de vorige is nu gelijk aan de next element van de nieuwe node
    prev_node -> next = new_node; // koppeling vorige wordt aan de nieuwe node gezet
}

void append(struct node* *head_ref, int new_data)
{
   struct node* new_node  = (struct node*)malloc(sizeof(struct node));
   struct node* last = (*head_ref);

   new_node -> data = new_data;
   new_node -> next = NULL; // is nu de laatste node;

   if (*head_ref == NULL) // nieuwe lijst wordt nu aangemaakt
   {
       *head_ref = new_node;
       return;
   }

       while(last -> next != NULL) // we reizen nu naar de laatste node
       {
           last = last->next;
       }

   last->next = new_node; //laatste node wordt nu vastgemaakt aan de nieuwe node
}

// This function prints contents of linked list starting from head
void printList(struct node *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->next;
  }
}

/* Driver program to test above functions*/
int main()
{
  /* Start with the empty list */
  struct node* head = NULL;

  // Insert 6.  So linked list becomes 6->NULL
  append(&head, 6);

  // Insert 7 at the beginning. So linked list becomes 7->6->NULL
  push(&head, 7);

  // Insert 1 at the beginning. So linked list becomes 1->7->6->NULL
  push(&head, 1);

  // Insert 4 at the end. So linked list becomes 1->7->6->4->NULL
  append(&head, 4);

  //Insert 8, after 7. So linked list becomes 1->7->8->6->4->NULL
  //insertAfter(head->next, 8);

 // insertAfter(head->next, 250);

  append(&head, 78);

  append(&head, 102);

  append(&head, 180);

  append(&head, 250);

  printf("\n Created Linked list is: ");
  printList(head);

  return 0;
}


