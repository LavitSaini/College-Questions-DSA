#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int *ptr;
    printf("Enter Number of Elements You Wants to Allocate: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {

        printf("Memory Allocation Failed...");
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("Enter Element: ");
            scanf("%d", ptr + i);
        }

        printf("Enter a Number Again to Re-Allocate the Memory: ");
        scanf("%d", &m);

        ptr = (int *)realloc(ptr, m * sizeof(int));
        if (ptr == NULL)
        {
            printf("Memory Allocation Failed...");
        }
        else
        {
            for (int i = n; i < m; i++)
            {
                printf("Enter Element: ");
                scanf("%d", ptr + i);
            }

            for (int j = 0; j < m; j++)
            {
                printf("%d \t", *(ptr + j));
            }
        }

        free(ptr);
    }
    return 0;
}