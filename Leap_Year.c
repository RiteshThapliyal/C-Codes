#include <stdio.h>

int main() {

    int num = printf("Enter the Year: ");
    scanf("%d", &num);

    if (num % 400 == 0)
    {
        printf("Entered Year is Leap Year\n");
    }
    else if (num % 4 == 0)
    {
        printf("Entered Year is Leap Year\n");
    }
    else if (num % 100 == 0)
    {
        printf("Entered Year is not Leap Year\n");
    }
    else
    {
        printf("Entered Year is Not Leap Year\n");
    }
}