#include <stdio.h>
#include "Selection_Sort.c"

int main()
{
    int user_arr[10];
    printf("Enter 10 Values in the Array\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d Element: ", i+1);
        scanf("%d", &user_arr[i]);
    }

    int length = sizeof(user_arr) / sizeof(user_arr[0]);

    selection_sort(user_arr, length);

    printf("sorted array: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", user_arr[i]);
    }
    printf("\n");
}