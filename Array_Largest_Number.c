#include <stdio.h>

int main()
{
    int my_arr[] = {10, 23, 30, 40, 50, 90};

    int length = sizeof(my_arr) / sizeof(my_arr[0]);

    int max = my_arr[0];

    for (int i = 0; i < length; i++)
    {
        if (max < my_arr[i])
        {
            max = my_arr[i];
        }
    }
    printf("Largest Element in Array: %d\n", max);
}