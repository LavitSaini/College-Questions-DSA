#include <stdio.h>

int main()
{
    int n, k, index;
    printf("Enter Array Size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Array Elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array Before Element Insert Operation: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }

    printf("\n");

    printf("Enter New Element for Insert Operation: ");
    scanf("%d", &k);

    printf("Enter Index Number(0 to n-1) for Insert New Elements: ");
    scanf("%d", &index);

    arr[n + 1];
    for (int i = n + 1; i >= index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = k;

    printf("Array After Element Insert Operation: \n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}