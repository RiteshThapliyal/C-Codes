/*
Find the Difference between the sum of,
elements at even indexes to the sum of elements at odd indexes.
*/

#include <stdio.h>

int main() 
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    int length = sizeof(arr) / sizeof(arr[0]);

    int sum_Even = 0, sum_Odd = 0, result;

    for (int i = 0; i < length; i++)
    {
        if ((i+1) % 2 == 0)
        {
            sum_Even += arr[i];
        }
        else
        {
            sum_Odd += arr[i];
        }
    }

    if (sum_Even > sum_Odd)
    {
        result = sum_Even - sum_Odd;
    }
    else
    {
        result = sum_Odd - sum_Even;
    }

    printf("Difference is: %d\n", result);
}