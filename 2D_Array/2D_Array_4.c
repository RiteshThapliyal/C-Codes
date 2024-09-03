// Find the sum of a n*m matrix

#include <stdio.h>

int main()
{
    int rows, columns;
    printf("Enter Rows of the Matrix: ");
    scanf("%d", &rows);

    printf("Enter Columns of the Matrix: ");
    scanf("%d", &columns);

    int array[rows][columns];
    int i, j, sumOfElements = 0;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter Element at Index (%d, %d): ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            sumOfElements += array[i][j];
        }
    }

    printf("Sum of all the elements: %d", sumOfElements);

    return 0;
}