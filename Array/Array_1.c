/*
Given an array by the student of marks in which marks of student is, 
less than 35 then print its index number of array as its roll_number.
*/

#include <stdio.h>

int main() 
{
    int std_marks[5];

    int length = sizeof(std_marks) / sizeof(std_marks[0]);

    for (int range = 0; range < length; range++)
    {
        printf("Enter Marks of Subject %d: ", range + 1);
        scanf("%d", &std_marks[range]);
    }

    for (int i = 0; i < length; i++)
    {
        printf("Mark of Subject %d: %d\n", i+1, std_marks[i]);
    }
    // printf("\n");

    for (int check = 0; check < length; check++)
    {
        if (std_marks[check] < 35)
        {
            printf("Index of Element having Marks less than 35: %d\n", check);
        }
    }
}