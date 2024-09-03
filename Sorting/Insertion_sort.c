#include <stdio.h>

int main()
{
    int arr[] = {3, 5, 1, 6, 9, 2};
    int length = sizeof(arr) / sizeof(arr[0]);
    int i, j, store;

    for (i = 1; i < length; i++)
    {
        store = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > store)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = store;
    }

    for (int k = 0; k < length; k++)
    {
        printf("%d ", arr[k]);
    }

    return 0;
}