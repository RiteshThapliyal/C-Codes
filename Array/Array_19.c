/*
Rotated Array
*/

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int length = sizeof(arr) / sizeof(arr[0]);

    int new_arr[length];

    int index = 0;

    int user_input = printf("Enter the index from where you want to rotate: ");
    scanf("%d", &user_input);

    for (int i = user_input; i < length; i++)
    {
        new_arr[index] = arr[i];
        index ++;
    }

    for (int i = 0; i < user_input; i++)
    {
        new_arr[index] = arr[i];
        index ++;
    }

    for (int i = 0; i < length; i++)
    {
        printf("Rotated Array: %d", new_arr[i]);
    }
}

// Method 2

// through insertion sort method - Time-Complexity: O(n2)


// #include <stdio.h>

// int main()
// {
//     int arr[] = {1,2,3,4,5,6};
//     int l = sizeof(arr)/sizeof(arr[0]);
//     int i ,j,key;
//     int n = printf("enter the number: ");
//     scanf("%d", &n);

//     for(i = 0;i<n;i++){
//         key = arr[0];
//         j = 1;
//         while(j < l){
//             arr[j-1] = arr[j];
//             j++;
//         }

//         arr[j-1] = key;
//     }

//     for(i = 0;i<l;i++){
//         printf("%d\t", arr[i]);
//     }
// }
