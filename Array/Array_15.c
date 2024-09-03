/*
Check if given Array is Palindrome or Not.
*/

#include <stdio.h>

int main()
{
    int arr[] = {11, 1, 2, 1, 8};

    int length = sizeof(arr) / sizeof(arr[0]);

    int count = 0;

    for (int i = 0; i < length/2; i++)
    {
        if (arr[i] != arr[(length - 1) - i])
        {
            count = 1;
        }
    }

    if (count == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}