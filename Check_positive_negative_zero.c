#include <stdio.h>

int main()
{
    int user_input = printf("Enter a Number: ");
    scanf("%d", &user_input);

    if (user_input < 0)
    {
        printf("Entered Number: %d, is Negative Number.\n", user_input);
    }
    else if (user_input > 0)
    {
        printf("Entered Number: %d, is Positive Number.\n", user_input);
    }
    else
    {
        printf("Entered Number: %d, is Zero.\n", user_input);
    }
}