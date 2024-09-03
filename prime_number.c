#include <stdio.h>

int main()
{
    int user_input = printf("Enter the Number: ");
    scanf("%d", &user_input);

    if (user_input == 0 || user_input == 1)
    {
        printf("Entered Number is not a Prime Number\n");
    }

    for (int i = 2; i <= user_input; i ++)
    {
        if (user_input % i == 0)
        {
            if (user_input == i)
            {
                printf("Entered Number is a Prime Number\n");
                break;
            }
            else
            {
                printf("Entered Number is not a Prime Number\n");
                break;
            }
        }
    }
}

// corrected code

/*
#include <stdio.h>

int main()
{
    int num = printf("Enter any Number: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Invalid Input.\n");
    }

    if (num == 1)
    {
        printf("Not Prime.\n");
    }

    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            if (num == i)
            {
                printf("Prime Number.\n");
                break;
            }
            else
            {
                printf("Not Prime.\n");
                break;
            }
        }
    }
}
*/