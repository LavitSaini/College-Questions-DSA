#include <stdio.h>

void Merge_Sort(int arr[], int n)
{
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

    return 0;
}