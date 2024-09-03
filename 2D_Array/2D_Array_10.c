// Matrix Multiplication

#include <stdio.h>

int main()
{
    int Matrix_1[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int Matrix_2[3][3] = {{9,8,7}, {6,5,4}, {3,2,1}};
    int Matrix_3[3][3];

    int index = 3;

    for (int row = 0; row < 3; row ++)
    {
        for (int col = 0; col < 3; col++)
        {
            Matrix_3[row][col] = 0;
            for (int k = 0; k < index; k++)
            {
                Matrix_3[row][col] += Matrix_1[row][k] * Matrix_2[k][col];
            }
        }
    }

    for (int row = 0; row < 3; row ++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("%d ", Matrix_1[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    for (int row = 0; row < 3; row ++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("%d ", Matrix_2[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    for (int row = 0; row < 3; row ++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("%d ", Matrix_3[row][col]);
        }
        printf("\n");
    }

    return 0;
}