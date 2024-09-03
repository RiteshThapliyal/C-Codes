// write a program to Add 2 matrices

#include <stdio.h>

int main()
{
    int arr1[2][2];
    int arr2[2][2];
    int result = 0;

    int len_row_1 = sizeof(arr1) / sizeof(arr1[0]);
    int len_row_2 = sizeof(arr2) / sizeof(arr2[0]);
    // printf("Length of Array 1: %d\n", len_row_1);
    // printf("Length of Array 2: %d\n", len_row_2);
    int len_col_1 = sizeof(arr1[0]) / sizeof(arr1[0][0]);
    int len_col_2 = sizeof(arr2[0]) / sizeof(arr2[0][0]);
    // printf("Length of Array 1: %d\n", len_col_1);
    // printf("Length of Array 2: %d\n", len_col_2);

    printf("Enter Element in First Matrix\n");

    for (int i = 0; i < len_row_1; i++)
    {
        for (int j = 0; j < len_col_1; j++)
        {
            printf("Enter Element at Index (%d, %d): ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter Element in Second Matrix\n");

    for (int i = 0; i < len_row_2; i++)
    {
        for (int j = 0; j < len_col_2; j++)
        {
            printf("Enter Element at Index (%d, %d): ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    if (len_row_1 == len_row_2 && len_col_1 == len_col_2)
    {
        for (int i = 0; i < len_row_1; i++)
        {
            for (int j = 0; j < len_col_2; j++)
            {
                result = arr1[i][j] + arr2[i][j];
                printf("%d ", result);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Dimensions does not Match.");
    }

    return 0;
}