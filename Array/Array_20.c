#include <stdio.h>

int main()
{
    int arr[] = {2, 4, 7, 9, 4, 6, 2, 1};
    int length = sizeof(arr) / sizeof(arr[0]);

    int j = 0, i, count, ref_arr;

    work:
        count = 0;
        ref_arr = arr[j];

        for (i = 0; i < length; i++)
        {
            if (ref_arr == arr[i] && arr[i] != 0)
            {
                count ++;
                arr[i] = 0;
            }
        }
        if (count > 1)
        {
            printf("%d ", ref_arr);
        }
        j++;
        if (j < length)
        {
            goto work;
        }

    return 0;
}