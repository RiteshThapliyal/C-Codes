// Find the maximum and minimum element 
// and their index in a matrix


#include <stdio.h>

int main()
{
    int array[2][2] = {{1,2}, {3,4}};
    int len_row = sizeof(array) / sizeof(array[0]);
    int len_col = sizeof(array[0]) / sizeof(array[0][0]);

    // this is to check the above lines are working perfectly or not.
    // {
        // printf("Length of Rows: %d\n", len_row);
        // printf("Length of Columns: %d", len_col);
    // }
    
    int ref_max_value = array[0][0];
    int ref_min_value = array[0][0];
    int x_max, y_max;
    int x_min, y_min;


    for (int i = 0; i < len_row; i++)
    {
        for (int j = 0; j < len_col; j++)
        {
            if (ref_max_value < array[i][j])
            {
                ref_max_value = array[i][j];
                x_max = i;
                y_max = j;
            }

            if (ref_min_value > array[i][j])
            {
                ref_min_value = array[i][j];
                x_min = i;
                y_min = j;
            }
        }
    }

    printf("Maximum Element in Matrix at index (%d, %d): %d\n", x_max, y_max,ref_max_value);
    printf("Minimum Element in Matrix at index (%d, %d): %d", x_min, y_min,ref_min_value);

    return 0;
}