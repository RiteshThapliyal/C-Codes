// code to print number from n to 1

#include <stdio.h>

int till_N(int x)
{
    if (x <= 0)
    {
        return 0;
    }
    printf("%d ", x);
    return till_N(x - 1);
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

    till_N(userInput);
}