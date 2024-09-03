#include <stdio.h>

int main() 
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Marks: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}