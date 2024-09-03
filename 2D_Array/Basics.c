// print 2d array
// take input as user in 2d array
// keyboard order of the matrix

#include <stdio.h>

int main()
{
    // print 2d array

    int array[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }




    // take input as user in 2d array

    int array[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter Element at (%d,%d): ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }





    // code to find the length of the 2d array

    int array[3][3];
    int length = sizeof(array) / sizeof(array[0]);
    int length_col = sizeof(array[0]) / sizeof(array[0][0]);
    printf("Length of Rows: %d\n", length);

    printf("Length of Column: %d\n", length_col);





    

    // keyboard entered order of the matrix

    int row, col;
    printf("Enter Row of Matrix: ");
    scanf("%d", &row);

    printf("Enter Column of Matrix: ");
    scanf("%d", &col);

    int array[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter Element at Index (%d, %d): ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}