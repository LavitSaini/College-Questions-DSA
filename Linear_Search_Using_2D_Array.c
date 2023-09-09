#include <stdio.h>

void Linear_Search(int row, int col, int key, int arr[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                printf("[%d %d]", i, j);
                return;
            }
        }
    }
    printf("-1");
}

int main()
{
    int r, c, k;
    printf("Enter Number of Rows in Array: ");
    scanf("%d", &r);

    printf("Enter Number of Columns in Array: ");
    scanf("%d", &c);

    int arr[r][c];
    printf("Enter Array Elements: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Index[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter a Key for Search: ");
    scanf("%d", &k);

    Linear_Search(r, c, k, arr);
}