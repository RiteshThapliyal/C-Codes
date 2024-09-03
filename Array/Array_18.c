/*
Find the unique element in the array.
*/

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 5, 3, 2, 1};

    int length = sizeof(arr) / sizeof(arr[0]);

    int isUnique;

    for (int i = 0; i < length; i++) 
    {

        isUnique = 1;

        for (int j = 0; j < length; j++) 
        {
            if (arr[i] == arr[j] && i != j) 
            {
                isUnique = 0;
                break;
            }
        }

        if (isUnique) {
            printf("Unique element in the array: %d \n", arr[i]);
        }
    }

    return 0;
}