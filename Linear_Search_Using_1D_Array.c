#include <stdio.h>

int Linear_Search(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int n, k;
    printf("Enter Array Size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Array Elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter Key for Search: ");
    scanf("%d", &k);

    printf("%d", Linear_Search(arr, n, k));
    return 0;
}