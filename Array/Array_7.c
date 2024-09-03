/*
Count the Number of Element in the array 
greater than a given number entered by user.
*/

#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};

    int length = sizeof(arr)/sizeof(arr[0]);
    int record = 0;

    int count = 0;

    int user_input = printf("Enter a Number: ");
    scanf("%d", &user_input);

    for (int i = 0; i < length; i++)
    {
        if (arr[i] == user_input)
        {
            record = i;
        }
    }

    int ref = arr[record];

    // printf("%d ", record);   this line is to check whether record can capture index of element or not
    // printf("%d ", ref); this line is to check whether "ref" output is same of the element entered by user

    for (int j = 0; j < length; j++)
    {
        if (ref < arr[j])
        {
            count ++;
        }
    }

    printf("Count of elements greater then user_entered value in the array: %d\n", count);

}