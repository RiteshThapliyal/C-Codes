/*
Reverse the array without using the extra array.
*/

#include <stdio.h>
int swap(int *x, int *y){
        *x = *x + *y;
        *y = *x - *y;
        *x = *x - *y;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, n = sizeof(arr) / sizeof(arr[0]);

    for(i = 0;i<n/2;i++){
        swap(&arr[i], &arr[n-i-1]);
    }

    printf("Reversed array:\n");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}