#include <stdio.h>

int main()
{
    int n, del;
    printf("Enter Array Size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Array Elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array Before Element Delete Operation: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }

    printf("\n");

    printf("Enter Index Number(0 to n-1) for Delete Operation: ");
    scanf("%d", &del);

    for (int i = del; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1];

    printf("Array After Delete Operation: \n");
    for (int i = 0; i < n-1; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}