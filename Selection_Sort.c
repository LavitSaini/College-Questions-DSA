#include <stdio.h>

void Selection_Sort(int a[], int n)
{
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if(a[min] > a[j]){
                min = j;
            }
        }

        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("\nArray Elements After Sorting: \n");
    for(int i=0; i<n; i++){
        printf(" %d", a[i]);
    }
}

int main()
{
    int n;
    printf("Enter Array Size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter Array Elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array Elements Before Sorting: \n");
    for (int j = 0; j < n; j++)
    {
        printf(" %d", a[j]);
    }

    Selection_Sort(a, n);
    return 0;
}