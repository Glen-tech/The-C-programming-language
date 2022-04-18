// A complete working C program to delete a node in a linked list
// at a given position
#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct Node
{
    int data;
    struct Node *next;
};

/* Given a reference (pointer to pointer) to the head of a list
   and an int inserts a new node on the front of the list. */
void append(struct Node** head_ref, int new_data)
{
    struct Node* new_node  = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = (*head_ref);

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

/* Given a reference (pointer to pointer) to the head of a list
   and a position, deletes the node at the given position */
void deleteNode(struct Node **head_ref, int position)
{
   // If linked list is empty
   if (*head_ref == NULL)
      return;

   // Store head node
   struct Node* temp = *head_ref;

    // If head needs to be removed
    if (position == 0)
    {
        *head_ref = temp->next;   // Change head
        free(temp);               // free old head
        return;
    }

    // Find previous node of the node to be deleted
    for (int i=0; temp!=NULL && i<position-1; i++)
         temp = temp->next;

    // If position is more than number of nodes
    if (temp == NULL || temp->next == NULL)
         return;

    // Node temp->next is the node to be deleted
    // Store pointer to the next of node to be deleted
    struct Node *next = temp->next->next;

    // Unlink the node from linked list
    free(temp->next);  // Free memory

    temp->next = next;  // Unlink the deleted node from list
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

/* Driver program to test above functions*/
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;

    append(&head, 7); //1
    append(&head, 1); //2
    append(&head, 3); //3
    append(&head, 2); //4
    append(&head, 8); //5

    append(&head, 15); //6
    append(&head, 14); //7
    append(&head, 13); //8
    append(&head, 12); //9
    append(&head, 18); //10

    append(&head, 27); //1
    append(&head, 21);
    append(&head, 23);
    append(&head, 22);
    append(&head, 28);

    puts("Created Linked List: ");
    printList(head);

    deleteNode(&head, 11);
    deleteNode(&head, 12);
    deleteNode(&head, 13);
    deleteNode(&head, 14);
    deleteNode(&head, 15);


    puts("\nAfter deletion");
    printList(head);
    return 0;
}
