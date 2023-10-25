#include <stdio.h>

int queue[100], n, front = -1, rear = -1;

void Enqueue();

void Dequeue();

int Peek();

void IsEmpty();

void IsFull();

void Display();

void size();

int main()
{

    printf("\nEnter Size of Queue: ");
    scanf("%d", &n);

    int choice;
    printf("1->Enqueue \n2->Dequeue \n3->Peek \n4->Isfull \n5->IsEmpty \n6->Display \n7->Size \n8->Exit \n\n");

    while (1)
    {

        printf("Enter Your Choice to Perform Operation: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            Enqueue();
            break;

        case 2:
            Dequeue();
            break;

        case 3:
            printf("%d \n\n", Peek());
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
            printf("Invalid Operation Number Please Enter Correct...\n\n");
        }
    }
    return 0;
}

void Enqueue()
{

    if (rear >= n - 1)
    {
        printf("Queue Overflow... \n\n");
    }
    else
    {
        int val;

        if (front == -1)
        {
            front++;
        }

        printf("Enter a Elemet for Enqueue Oeration: ");
        scanf("%d", &val);

        rear++;
        queue[rear] = val;
        printf("Enqueue Opeartion Done... \n\n");
    }
}

void Dequeue()
{

    if (front == -1 || front == rear + 1)
    {
        printf("Queue Underflow... \n\n");
    }
    else
    {
        printf("Element Deleted: %d \n", queue[front]);
        front++;
        printf("Queue Operation Done... \n\n");
    }
}

int Peek()
{

    if (front == -1 || front == rear + 1)
    {
        return -1;
    }
    else
    {
        return queue[front];
    }
}

void IsEmpty()
{

    if (front == -1 || front == rear + 1)
    {
        printf("Queue is Empty... \n\n");
    }
    else
    {
        printf("Queue is Not Empty...\n\n");
    }
}

void IsFull()
{

    if (rear >= n - 1)
    {
        printf("Queue is Full... \n\n");
    }
    else
    {
        printf("Queue is Not Full... \n\n");
    }
}

void Display()
{

    if (front == -1 || front == rear + 1)
    {
        printf("No Element in Queue to Display... \n\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d \n", queue[i]);
        }
        printf("\n");
    }
}

void size()
{

    if (front == -1 || front == rear + 1)
    {
        printf("Elements in Queue: 0 \n\n");
    }
    else
    {
        int count = 0;
        for (int i = front; i <= rear; i++)
        {
            count++;
        }
        printf("Elements in Queue: %d \n\n", count);
    }
}