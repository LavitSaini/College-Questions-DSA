#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void Display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is: %d\n", ptr->data);
        ptr = ptr->link;
    }
}

struct node * DeleteBeginingNode(struct node *head)
{
    struct node *ptr = head;
    head = head->link;
    free(ptr);
    return head;
}

struct node * DeleteIndexNode(struct node *head, int index)
{
    struct node *ptr = head;
    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->link;
        i++;
    }
    struct node *p = ptr->link;
    ptr->link = p->link;
    free(p);
    return head;
}

struct node * DeleteEndNode(struct node *head)
{
    struct node *p = head;
    struct node *q = p->link;
    while (q->link != NULL)
    {
        p = p->link;
        q = q->link;
    }
    p->link = NULL;
    free(q);
    return head;
}

struct node * DeleteValueNode(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = p->link;
    while (q->data != value && q->link != NULL)
    {
        p = p->link;
        q = q->link;
    }

    if(q->data == value){
        p->link = q->link;
        free(q);
    }
    return head;
}


int main()
{

    struct node *head;
    struct node *A;
    struct node *B;
    struct node *last;

    // Allocate the memory for nodes in Linked list
    head = (struct node *)malloc(sizeof(struct node));
    A = (struct node *)malloc(sizeof(struct node));
    B = (struct node *)malloc(sizeof(struct node));
    last = (struct node *)malloc(sizeof(struct node));

    // Declare Data Values of Nodes

    // Link node head with node A
    head->data = 33;
    head->link = A;

    // Link node A with node B
    A->data = 11;
    A->link = B;

    // Link node B with node C
    B->data = 44;
    B->link = last;

    // End Linked list with node C
    last->data = 28;
    last->link = NULL;

    // Display Linked List
    Display(head);

    // Delete Begining Node of Linked List
    // head = DeleteBeginingNode(head);

    // Display Linked List after Deletion
    // printf("\nDelete Begining Node of Linked List: \n");
    // Display(head);

    // Delete Given Index Node of Linked List
    head = DeleteIndexNode(head, 1);

    // Display Linked List after Deletion
    printf("\nDelete Given Index Node of Linked List: \n");
    Display(head);

    // Delete End Node of Linked List
    // head = DeleteEndNode(head);

    // Display Linked List after Deletion
    // printf("\nDelete End Node of Linked List: \n");
    // Display(head);

    // Delete Given Value Node of Linked List (But Not Deleting the 0 Index Value)
    head = DeleteValueNode(head, 28);

    // Display Linked List after Deletion
    printf("\nDelete Given Value Node of Linked List: \n");
    Display(head);

    return 0;
}