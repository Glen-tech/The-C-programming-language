
// A complete working C program to demonstrate deletion in singly
// linked list
#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct Node
{
    int data;
    struct Node *next;
};

/* Given a reference (pointer to pointer) to the head of a list
   and an int, inserts a new node on the front of the list. */
void push(struct Node** head_ref, int new_data)
{
   struct Node *new_node = (struct node*) malloc(sizeof(struct Node)); // allocatie
   new_node -> data = new_data; // plaatsen van de data
   new_node -> next = (*head_ref); // koppelen volgende node
   (*head_ref) = new_node; // new_node is de volgende node
}

/* Given a reference (pointer to pointer) to the head of a list
   and a key, deletes the first occurrence of key in linked list */
void deleteNode(struct Node **head_ref, int key)
{
    // Store head node
    struct Node* temp = *head_ref, *prev;

   if((temp != NULL) && (temp -> data == key))
   {
        *head_ref = temp -> next;
       free(head_ref); // verwijderen element
       return;
   }

    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while((temp != NULL) && (temp -> data != key))
    {
        prev = temp;
        temp = temp -> next; // temp gaat naar de volgende element , prev is gelijk aan temp
    }
    // If key was not present in linked list
    if (temp == NULL) return;


    prev->next = temp->next;  // de connectie van de volgende node van prev is nu gelijk aan temp

    free(temp);  // temp is succesvol gedelete
}

// This function prints contents of linked list starting from
// the given node
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}

/* Drier program to test above functions*/
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    puts("Created Linked List: ");
    printList(head);
    deleteNode(&head, 3);
    puts("\nLinked List after Deletion of 3: ");
    printList(head);
    return 0;
}
