#include <stdio.h>

int stack[100], n, top = -1;

void push();

void pop();

int peek();

void IsEmpty();

void IsFull();

void Display();

void size();

int main()
{

    printf("\nEnter Size of Stack: ");
    scanf("%d", &n);
    printf("\n");

    int choice;
    printf("1->Push \n2->Pop \n3->Peek \n4->IsEmpty \n5->IsFull \n6->Display \n7->Size \n8->Exit \n\n");

    while (1)
    {

        printf("Enter Your Choice to Perform Operation: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            printf("%d \n\n", peek());
            break;

        case 4:
            IsEmpty();
            break;

        case 5:
            IsFull();
            break;

        case 6:
            Display();
            break;

        case 7:
            size();
            break;

        case 8:
            printf("Program is Exit...\n\n");
            return 0;

        default:
            printf("Invaild Operation Please Enter Operation Again...\n\n");
        }
    }
    return 0;
}

void push()
{

    if (top >= n - 1)
    {
        printf("Stack Overflow...\n\n");
    }

    else
    {
        int val;
        printf("Enter a Element for Push Operation: ");
        scanf("%d", &val);
        top++;
        stack[top] = val;
        printf("Push Operation Done...\n\n");
    }
}

void pop()
{

    if (top <= -1)
    {
        printf("Stack Underflow...\n\n");
    }

    else
    {
        printf("Element Deleted from Stack: %d\n", stack[top]);
        top--;
        printf("Pop Operation Done...\n\n");
    }
}

int peek()
{
    if (top <= -1)
    {
        return -1;
    }
    else
    {
        return stack[top];
    }
}

void IsEmpty()
{
    if (top <= -1)
    {
        printf("Stack is Empty...\n");
    }
    else
    {
        printf("Stack is not Empty...\n");
    }
}

void IsFull()
{
    if (top >= n - 1)
    {
        printf("Stack is full...\n\n");
    }
    else
    {
        printf("Stack is not full...\n\n");
    }
}

void Display()
{
    if (top <= -1)
    {
        printf("No Element in Stack to Display...\n\n");
    }
    else
    {
        printf("Stack is: \n");

        for (int i = top; i >= 0; i--)
        {
            printf("%d \n", stack[i]);
        }
        printf("\n");
    }
}

void size()
{
    if (top <= -1)
    {
        printf("Elements in Stack: 0 \n");
    }
    else
    {
        int count = 0;
        for (int i = 0; i <= top; i++)
        {
            count++;
        }
        printf("Elements in Stack: %d \n", count);
    }
}