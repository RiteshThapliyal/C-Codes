// Write a program to convert square matrix into its transpose without using extra array.

#include <stdio.h>

int main()
{
    int row, column;
    printf("Enter Row of the Matrix: ");
    scanf("%d", &row);

    printf("Enter Column of the Matrix: ");
    scanf("%d", &column);

    int Matrix_arr[row][column];

    if (row == column)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                printf("Enter Element at Index (%d, %d): ", i, j);
                scanf("%d", &Matrix_arr[i][j]);
            }
        }
    }
    else
    {
        printf("Enter Square Matrix Next Time.\n");
        return 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (j > i)
            {
                int storage = Matrix_arr[i][j];
                Matrix_arr[i][j] = Matrix_arr[j][i];
                Matrix_arr[j][i] = storage;
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", Matrix_arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}