/*
C program to calculate the average of all
Elements of an Array.
*/

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3};

    int length = sizeof(arr) / sizeof(arr[0]);

    int average = 0;

    for (int i = 0; i < length; i++)
    {
        average += arr[i];
    }

    printf("%d ", average/length);
}