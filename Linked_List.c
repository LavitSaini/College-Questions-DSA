#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *InsertAtBegining(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->link = head;
    ptr->data = data;
    return ptr;
}

struct node *InsertAtIndex(struct node * head, int data, int index){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * p = head;
    
    int i = 0;
    while(i != index - 1){
        p = p->link;
        i++;
    }

    ptr->data = data;
    ptr->link = p->link;
    p->link = ptr;
    return head;
}

struct node *InsertAtEnd(struct node *head, int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node * p = head;
    
    while(p->link != NULL){
        p = p->link;
    }
    
    p->link = ptr;
    ptr->link = NULL;
    return head;
}

struct node *InsertAfterNode(struct node *head, struct node *preNode, int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->link = preNode->link;
    preNode->link = ptr;
    return head;
}

void DisplayLinkedList(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elements: %d\n", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}

int Search(struct node *ptr, int key)
{
    while (ptr != NULL)
    {
        if (ptr->data == key)
        {
            return 1;
        }
        ptr = ptr->link;
    }
    return 0;
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

    // Display Linked list Data Values
    printf("Linked List is: \n");
    DisplayLinkedList(head);

    // Insert the Elements at Begining of the Linked List
    printf("Insert New Elements in Begining of the Linked List: \n");
    head = InsertAtBegining(head, 1000);
    DisplayLinkedList(head);

    // Insert the Elements at the Given Index of the Linked List
    printf("Insert New Elements in Given Index of the Linked List: \n");
    head = InsertAtIndex(head, 49, 2);
    DisplayLinkedList(head);

    // Insert the Elements at the End of the Linked List
    printf("Insert New Elements at the End of the Linked List: \n");
    head = InsertAtEnd(head, 33);
    DisplayLinkedList(head);

    // Insert the Elements After a Given Node in the Linked List
    printf("Insert New Elements After a Given Node in the Linked List: \n");
    head = InsertAfterNode(head, B, 525);
    DisplayLinkedList(head);

    // Searching a Value in Linked list using Search function
    int key;
    printf("Enter a Key to Seach in Linked List: ");
    scanf("%d", &key);
    printf("%d\n", Search(head, key));

    return 0;
}