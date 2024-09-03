#include <stdio.h>

int main()
{
    int user_input, rem = 0, even = 0, odd = 0;
    printf("Enter Number more than one digit: ");
    scanf("%d", &user_input);

    while (user_input > 0)
    {
        rem = user_input % 10;
        if (rem % 2 == 0)
        {
            even ++;
        }
        else
        {
            odd++;
        }
        user_input /= 10;
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    
    return 0;
}