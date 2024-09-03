#include <stdio.h>

int main()
{
    int arr[] = {5, 3, 1, 0, 2};
    int length = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;

    for (i = 1; i < length; i++)
    {
        j = i;
        while (arr[j] >= 1 && arr[j] < arr[j - 1])
        {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;

            j--;
        }
        
    }

    for (int k = 0; k < length; k++)
    {
        printf("%d ", arr[k]);
    }


    return 0;
}