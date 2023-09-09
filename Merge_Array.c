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

    int sum = 0;
    for(int j=0; j<n; j++){
        sum += arr[j];
    }

    printf("Merge Array Elements: %d", sum);
    return 0;
}