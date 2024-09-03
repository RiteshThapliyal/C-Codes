// Write a program to print the transpose
// matrix entered by the user and 
// store it in the seperate matrix.

#include <stdio.h>

int main()
{
    int row, column;
    printf("Enter the Row of the Matrix: ");
    scanf("%d", &row);

    printf("Enter the Column of the Matrix: ");
    scanf("%d", &column);

    int Matrix_array[row][column];
    int Transpose_array[column][row];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter Element at index (%d, %d): ", i,j);
            scanf("%d", &Matrix_array[i][j]);
        }
    }

    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            Transpose_array[i][j] = Matrix_array[j][i];
        }
    }

    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", Transpose_array[i][j]);
        }
        printf("\n");
    }

    return 0;
}