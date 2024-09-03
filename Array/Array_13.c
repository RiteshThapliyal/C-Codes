/*
Write a Program to copy the given array element into the new array.
*/

#include <stdio.h>

int main() 
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    int length = sizeof(arr) / sizeof(arr[0]);

    int new_arr[8];

    for (int i = 0; i < length; i++)
    {
        new_arr[i] = arr[i];  
    }

    for (int j = 0; j < length; j++)
    {
        printf("%d ", new_arr[j]);
    }
}