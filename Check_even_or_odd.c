#include <stdio.h>

int main()
{
    int user_input = printf("Enter a Number: ");
    scanf("%d", &user_input);

    if (user_input % 2 == 0)
    {
        printf("Entered Number is Even\n");
    }
    else
    {
        printf("Entered Number is Odd\n");
    }
}