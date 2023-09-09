#include <stdio.h>

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Bubble_Sort(int arr[], int n)
{
    int count = 1;
    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                Swap(&arr[i], &arr[i + 1]);
            }
        }
        count++;
    }

    printf("\nArray After Sorting: \n");

    for (int j = 0; j < n; j++)
    {
        printf(" %d", arr[j]);
    }
}

int main()
{
    int n;
    printf("Enter Array Size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter Array Elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array Before Sorting: \n");
    for (int j = 0; j < n; j++)
    {
        printf(" %d", arr[j]);
    }

    Bubble_Sort(arr, n);

    return 0;
}