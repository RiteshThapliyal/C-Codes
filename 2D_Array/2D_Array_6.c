// write a program to print the tranpose of
// the matrix entered by the user.

// THIS CODE IS FOR ALL THE ORDER OF MATRIX

#include <stdio.h>

int main()
{
    int row, column;
    printf("Enter the Row of the Matrix: ");
    scanf("%d", &row);

    printf("Enter the Column of the Matrix: ");
    scanf("%d", &column);

    int Matrix_array[row][column];

    // below code block is used to take the input in matrix

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter Element at index (%d, %d): ", i,j);
            scanf("%d", &Matrix_array[i][j]);
        }
    }

    // below code block is used to print the array

    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", Matrix_array[j][i]);
        }
        printf("\n");
    }

    return 0;
}




// Approach 2nd

// but it works on square matrix only

#include <stdio.h>

int main()
{
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}