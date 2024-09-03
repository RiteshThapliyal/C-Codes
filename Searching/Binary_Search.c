#include <stdio.h>

int binarySearch(int array[], int length, int data)
{
    int left = 0, right = length - 1;
    while (left <= right)
    {
        int mid = (left + right)/2;
        if (data == array[mid])
        {
            return mid;
        }
        else if (data < array[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(arr) / sizeof(arr[0]);

    int userInput;
    printf("Enter the Element You want to Find: ");
    scanf("%d", &userInput);

    int result = binarySearch(arr, length, userInput);
    if (result == -1)
    {
        printf("Element not Found\n");
    }
    else
    {
        printf("Element Found at Index: %d\n", result);
    }

    return 0;
}