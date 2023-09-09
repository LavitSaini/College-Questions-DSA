#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter Row and Columns of Matrix: ");
    scanf("%d %d", &n, &m);

    int arr1[n][m], arr2[n][m];

    printf("Enter First Matrix Elements: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Index[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("First Matrix is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" %d", arr1[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter Second Matrix Elements: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Index[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("Second Matrix is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" %d", arr2[i][j]);
        }
        printf("\n");
    }

    printf("\nAddition of Two Matrices is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" %d", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }

    printf("Substraction of Two Matrices is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" %d", arr1[i][j] - arr2[i][j]);
        }
        printf("\n");
    }
}