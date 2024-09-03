#include <stdio.h>

int main()
{    // calculator

    printf("1 for Addition\n");
    printf("2 for Subtraction\n");
    printf("3 for Multiplication\n");
    printf("4 for Division\n");

    int user_input = printf("Enter any of above option: ");
    scanf("%d", &user_input);

    int num1 = printf("Enter first number: ");
    scanf("%d", &num1);

    int num2 = printf("Enter second number: ");
    scanf("%d", &num2);

    switch (user_input)
    {
        case 1:
        printf("Addition of Entered Numbers: %d\n", num1 + num2);
        break;

        case 2:
        printf("Subtraction of Entered Numbers: %d\n", num1 - num2);
        break;

        case 3:
        printf("Multiplication of Entered Numbers: %d\n", num1 * num2);
        break;

        case 4:
        if (num2 == 0)
        {
            printf("Division not Possible");
            break;
        }
        else
        {
        printf("Division of Entered Numbers: %d\n", num1 / num2);
        break;
        }

        default:
        printf("Invalid Input");
    }
}