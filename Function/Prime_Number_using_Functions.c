// check prime number using functions 

#include <stdio.h>

int prime(int x)
{
    int i, count = 0;
    for (i = 2; i <= x; i++)
    {
        if (x % i == 0)
        {
            count ++;
        }
    }

    if (count == 1)
    {
        printf("Prime Number.\n");
        return 0;
    }
    else
    {
        printf("Not Prime.\n");
        return 0;
    }
}

int main()
{
    int user_input;
    printf("Enter a Number: ");
    scanf("%d", &user_input);

    prime(user_input);
    return 0;
}