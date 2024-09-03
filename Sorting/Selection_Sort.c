#include <stdio.h>

void selection_sort(int arr[], int length)
{
    int i, j, x;

    for (i = 0; i < length; i++)
    {
        for (j = i+1; j < length; j++)
        {
            if (arr[i] > arr[j])
            {
                x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
            }
        }
    }
}