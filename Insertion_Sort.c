#include <stdio.h>

void Insertion_Sort(int arr[], int n)
{
    for (int i = 1; i < n; i++){

        int curr = arr[i];
        int j = i - 1;

        while (arr[j] > curr && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = curr;
    }

    printf("\nArray After Sorting: \n");

    for (int k = 0; k < n; k++)
    {
        printf(" %d", arr[k]);
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

    Insertion_Sort(arr, n);

    return 0;
}