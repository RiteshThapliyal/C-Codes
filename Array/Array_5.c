/*
Find the minimum value out of all the elements in the array.
*/

#include <stdio.h>

int main() 
{
    int arr[8] = {9, 2, 11, 13, 3, 4, 8, 7};

    int reference = arr[0];

    int length = sizeof(arr) / sizeof(arr[0]);

    for (int check = 0; check < length; check++)
    {
        if (reference > arr[check])
        {
            reference = arr[check];
        }
    }

    printf("Smallest Element in the Array: %d\n", reference);
}