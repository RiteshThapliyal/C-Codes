// Move zeroes to the end of the array

// Method - 1

// time complexity - o(n)
// space complexity - o(n)

#include <stdio.h>

int main()
{
    int arr[] = {5, 0, 2, 0, 0, 4, 1, 3, 0};
    int length = sizeof(arr) / sizeof(arr[0]);

    int ans[length];
    int index = 0;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] != 0)
        {
            ans[index] = arr[i];
            index ++;
        }
    }

    for (int i = index; i < length; i++)
    {
        ans[index] = 0;
        index ++;
    }

    for (int j = 0; j < length; j++)
    {
        printf("%d ", ans[j]);
    }
    printf("\n");

    return 0;
}

// Method - 2

// time complexity - o(n^2)
// space complexity - o(1)

#include <stdio.h>

int main()
{
    int arr[] = {5, 0, 2, 0, 0, 4, 1, 3, 0};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++)
    {
        for (int k = 0; k < (length - i - 1); k++)
        {
            if (arr[k] == 0)
            {
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }

    for (int j = 0; j < length; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}