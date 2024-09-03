/*
Find the total number of pairs in the array
whose sum is equal to the given value x.
*/

#include <stdio.h>

int main() 
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    int length = sizeof(arr) / sizeof(arr[0]);

    int user_input = printf("Enter a Number: ");
    scanf("%d", &user_input);

    int count = 0;

    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] + arr[j] == user_input)
            {
                printf("%d and %d\n", arr[i], arr[j]);
                count = 1;
                break;
            }
        }
    }
    if (count == 0)
    {
        printf("Invalid\n");
    }
}