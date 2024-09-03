#include <stdio.h>

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * factorial(n-1);
}

int main()
{
    int user_input = printf("Enter the Number: ");
    scanf("%d", &user_input);

    if (user_input < 0)
    {
        printf("Invalid Input\n");
        return 1;
    }
    
    int factAns = factorial(user_input);
    printf("%d\n", factAns);
}