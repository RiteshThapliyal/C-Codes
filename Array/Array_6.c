/*
Given an array in such a way to transfrom - 
if index is odd multiply the given element by 2,
else if index is even then add the given element by 10.
*/

#include <stdio.h>

int main() 
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++)
    {
        if ((i+1) % 2 == 0)
        {
            printf("%d ", arr[i] + 10);
        }
        else
        {
            printf("%d ", arr[i] * 2);
        }
    }    
}