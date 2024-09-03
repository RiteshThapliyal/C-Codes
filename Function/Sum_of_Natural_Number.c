// Sum of Natural Number using recursion entered by user.

#include <stdio.h>

int sum_ofNatural_Number(int x)
{
    if (x == 1)
    {
        return 1;
    }
    return x + sum_ofNatural_Number(x-1);
}

int main()
{
    int user_input;
    printf("Enter any Positive Integer: ");
    scanf("%d", &user_input);

    int result = sum_ofNatural_Number(user_input);
    printf("Sum of Natural Number till Entered Value: %d\n", result);
    
    return 0;
}