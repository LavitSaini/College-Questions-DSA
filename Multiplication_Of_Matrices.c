#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    printf("Enter First Matrix Rows and Columns: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter Second Matrix Rows and Columns: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Multiplication is Not Possible...");
        return 0;
    }

    int arr1[r1][c1], arr2[r2][c2], arr3[r1][c2];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            arr3[i][j] = 0;
        }
    }

    printf("Enter First Matrix Elements: \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Index[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("First Matrix is: \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf(" %d", arr1[i][j]);
        }
        printf("\n");
    }

    printf("Enter Second Matrix Elements: \n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Index[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("Second Matrix is: \n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf(" %d", arr2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                arr3[i][j] += (arr1[i][k] * arr2[k][j]);
            }
        }
    }

    printf("Multiplication of Two Matrices is: \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf(" %d", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}