/*
Find the second largest element in the given array.
*/

#include <stdio.h>

int main() 
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    int length = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < length; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    
    for (int j = 0; j < length; j++)
    {
        if (min < arr[j] && max != arr[j])
        {
            min = arr[j];
        }
    }
    printf("Second Largest Element in the given Array is: %d\n", min);
}