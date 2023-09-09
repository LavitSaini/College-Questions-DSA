#include <stdio.h>

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

    printf("Array Traverse: \n");
    for (int j = 0; j < n; j++)
    {
        printf("%d \t", arr[j]);
    }
    return 0;
}