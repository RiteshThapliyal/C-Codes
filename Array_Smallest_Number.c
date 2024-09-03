#include <stdio.h>

int main() 
{
    int my_arr[]= {10, 324, 45, 90, 9808, 5};

    int length = sizeof(my_arr) / sizeof(my_arr[0]);

    int small = my_arr[0];

    for (int i = 0; i < length; i++)
    {
        if (small > my_arr[i])
        {
            small = my_arr[i];
        }
    }
    printf("Smallest Element in Array: %d\n", small);
}