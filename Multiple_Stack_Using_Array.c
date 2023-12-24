#include <stdio.h>
#define MAX 10

// Using Two Stack - StackA & StackB

int stack[MAX], topA = -1, topB = MAX;

// Stack A Operations

void StackA_Push();

void StackA_Pop();

int StackA_Peek();

void StackA_Display();

// Stack B Opeartions

void StackB_Push();

void StackB_Pop();

int StackB_Peek();

void StackB_Display();

// Main function

int main()
{
    int choice;

    printf("\n StackA Operations: \n 1->StackA_Push\n 2->StackA_Pop\n 3->StackA_Peek\n 4->StackA_Display\n \n StackB Operations: \n 5->StackB_Push\n 6->StackB_Pop\n 7->StackB_Peek\n 8->StackB_Display\n 9->Exit\n \n");

    while (1)
    {

        printf("Enter Your Opearion Number for StackA & StackB Opeartions: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            StackA_Push();
            break;

        case 2:
            StackA_Pop();
            break;

        case 3:
            printf("topA = %d \n\n", StackA_Peek());
            break;

        case 4:
            StackA_Display();
            break;

        case 5:
            StackB_Push();
            break;

        case 6:
            StackB_Pop();
            break;

        case 7:
            printf("topB = %d \n\n", StackB_Peek());
            break;

        case 8:
            StackB_Display();
            break;

        case 9:
            printf("Program is Exit...\n\n");
            return 0;

        default:
            printf("Invalid Operation Enter Operation Number Again... \n\n");
        }
    }

    return 0;
}

// StackA Opeartions

void StackA_Push()
{

    if (topA == topB - 1)
    {
        printf("StackA Overflow... \n\n");
    }

    else
    {

        int val;
        printf("Enter a Element to Push in StackA: ");
        scanf("%d", &val);

        topA++;
        stack[topA] = val;
        printf("Push Operation Done in StackA...\n\n");
    }
}

void StackA_Pop()
{

    if (topA == -1)
    {
        printf("StackA Underflow... \n\n");
    }

    else
    {
        printf("Element Deleted from StackA: %d \n", stack[topA]);
        topA--;
        printf("Pop Opeartion Done in StackA...\n\n");
    }
}

int StackA_Peek()
{

    if (topA == -1)
    {
        return -1;
    }
    else
    {
        return stack[topA];
    }
}

void StackA_Display()
{

    if (topA == -1)
    {
        printf("No Element in StackA to Display... \n\n");
    }

    else
    {
        printf("StackA is: \n");
        for (int i = topA; i >= 0; i--)
        {
            printf("%d \n", stack[i]);
        }
        printf("\n");
    }
}

// StackB Opeartions

void StackB_Push()
{

    if (topB == topA + 1)
    {
        printf("StackB Overflow... \n\n");
    }

    else
    {

        int val;
        printf("Enter a Element to Push in StackB: ");
        scanf("%d", &val);

        topB--;
        stack[topB] = val;
        printf("Push Operation Done in StackB...\n\n");
    }
}

void StackB_Pop()
{

    if (topB == MAX)
    {
        printf("StackB Underflow... \n\n");
    }

    else
    {
        printf("Element Deleted from StackB: %d \n", stack[topB]);
        topB++;
        printf("Pop Opeartion Done in StackB...\n\n");
    }
}

int StackB_Peek()
{

    if (topB == MAX)
    {
        return 10;
    }
    else
    {
        return stack[topB];
    }
}

void StackB_Display()
{

    if (topB == MAX)
    {
        printf("No Element in StackB to Display... \n\n");
    }

    else
    {
        printf("StackB is: \n");
        for (int i = topB; i < MAX; i++)
        {
            printf("%d \n", stack[i]);
        }
        printf("\n");
    }
}
