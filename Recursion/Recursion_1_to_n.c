// code to print number from 1 to n

#include <stdio.h>

int till_N(int r, int x)
{
    if (r > x)
    {
        return 0;
    }   
    printf("%d ", r);
    return till_N(r+1, x);
}

int main()
{
    int userInput = printf("Enter any Number: ");
    scanf("%d", &userInput);

    if (userInput <= 0)
    {
        printf("Invalid Input\n");
        return 0;
    }

    till_N(1, userInput);
}