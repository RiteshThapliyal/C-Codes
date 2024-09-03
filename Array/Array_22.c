// Return the kth smallest element from Array

#include <stdio.h>

int main()
{
    int arr[] = {4, 1, 10, 7, 2, 15, 9};
    int length = sizeof(arr) / sizeof(arr[0]);

    int k;
    printf("Enter kth Index: ");
    scanf("%d", &k);

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    if (k <= length - 1)
    {
        printf("k^%d smallest element in the array: %d\n", k, arr[k-1]);
    }
    else
    {
        printf("Entered value exceeds to the Array Index.\n");
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}