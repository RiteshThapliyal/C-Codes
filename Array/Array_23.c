// Searching the element in the array using binary search

int b_search(int array[], int length, int data)
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

#include <stdio.h>

int main()
{
    int arr[] = {4, 2, 7, 5, 1, 9, 3};
    int length = sizeof(arr) / sizeof(arr[0]);

    int user_input, count = 0;
    printf("Enter the Element you want to search: ");
    scanf("%d", &user_input);

    // for searching, array should be sorted first 
    int i, j, store;
    for (i = 1; i < length; i++)
    {
        store = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > store)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = store;
    }

    // print the array to check the algorithm

    for (int k = 0; k < length; k++)
    {
        printf("%d ", arr[k]);
    }

    int result = b_search(arr, length, user_input);
    if (result == -1)
    {
        printf("Not Found");
    }
    else
    {
        printf("Found at index: %d\n", result);
    }

    return 0;
}