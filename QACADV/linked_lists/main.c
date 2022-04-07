#include <stdio.h>
#include <stdlib.h>



//Creation of Linked List node
struct node
{
    int data; //Data
    struct node *next; //Pointer to next node
};

//Creation of the node type
typedef struct node node_t;
void print_list(node_t * p);

int main()
{
    //Creation of node
    node_t *head_ptr = malloc(1 * sizeof(node_t));
    //Populate node (dereference)
    (*head_ptr).data = 69;
    //Populate node (pointer notation)
    head_ptr->next = NULL;

    node_t *new_ptr = malloc(1 * sizeof(node_t));
    (*new_ptr).data = 420;
    new_ptr->next = NULL;

    //Link Head to Next PTR
    head_ptr->next = new_ptr;

    print_list(head_ptr);
    return 0;
}

void print_list(node_t * p)
{
    while(p)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}
