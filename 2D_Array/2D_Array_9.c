// Wave Pattern 

// I have make it dynamic also below this Program.

#include <stdio.h>

int main()
{
    int Matrix_1[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int d;

     for (int i = 0; i < 3; i ++)
    {
        d = 2;
        for (int j = 0; j < 3; j++)
        {
            if (i % 2 == 0)
            {
                printf("%d ", Matrix_1[i][j]);
            }
            else
            {
                printf("%d ", Matrix_1[i][d]);
                d--;
            }
        }
        printf("\n");
    }

    return 0;
}

// Dynamic Code of above program of hard code.

#include <stdio.h>

int main()
{
    int row_x, col_y;
    printf("Enter the Number of Rows: ");
    scanf("%d", &row_x);

    printf("Enter the Number of Column: ");
    scanf("%d", &col_y);

    int Matrix[row_x][col_y];

    int reference;

    for (int row = 0; row < row_x; row++)
    {
        for (int col = 0; col < col_y; col++)
        {
            printf("Enter Element at Index (%d, %d): ", row, col);
            scanf("%d", &Matrix[row][col]);
        }
    }

    for (int row = 0; row < row_x; row++)
    {
        reference = row_x - 1;
        for (int col = 0; col < col_y; col++)
        {
            if (row % 2 != 0)
            {
                printf("%d ", Matrix[row][reference]);
                reference --;
            }
            else
            {
                printf("%d ", Matrix[row][col]);
            }
        }
        printf("\n");
    }

    return 0;
}