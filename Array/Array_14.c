/*
Reverse the array without using the extra array.
*/

#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int length = sizeof(arr) / sizeof(arr[0]);

    int last_index = length - 1;

    for (int first_index = 0; first_index < last_index;)
    {
        int basket = arr[first_index];
        arr[first_index] = arr[last_index];
        arr[last_index] = basket;
        first_index ++;
        last_index --;
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
}