/*
Calculate the sum of all the elements in the given array
*/

#include <stdio.h>

int main() 
{
    int arr[5] = {1, 2, 3, 4, 5};

    int length = sizeof(arr) / sizeof(arr[0]);

    int addition = 0;

    for (int i = 0; i < length; i++)
    {
        addition += arr[i];
    }

    printf("Sum of all the elements of the array: %d\n", addition);
}