/*
Find the dublicate element in the given array.
*/

#include <stdio.h>

int main()
{
    int arr[] = {2, 4, 3, 9, 5, 4, 9};

    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d is the Dublicate Element.\n", arr[i]);
                break;
            }
        }
    }
}
