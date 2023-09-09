#include <stdio.h>

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Selection_Sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if(arr[min] > arr[j]){
                min = j;
            }
        }

        Swap(&arr[i], &arr[min]);
    }

    printf("\nArray Elements After Sorting: \n");
    for(int i=0; i<n; i++){
        printf(" %d", arr[i]);
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

    printf("Array Elements Before Sorting: \n");
    for (int j = 0; j < n; j++)
    {
        printf(" %d", arr[j]);
    }

    Selection_Sort(arr, n);
    return 0;
}