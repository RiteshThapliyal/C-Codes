// code to print sum from 1 to n using recursion and loops

#include <stdio.h>

// Method 1
// int till_N(int x)
// {
//     int result = 0;
//     for (int i = 1; i <= x; i++)
//     {
//         result = result + i;
//     }
//     printf("%d\n", result);

//     return 0;
// }

// Method 2
int till_N(int x, int s)
{
    if (x == 0)
    {
        printf("%d\n", s);
        return 0;
    }
    till_N(x-1, s+x);

    return 0;
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

    till_N(userInput, 0);
}

// Method - 3

/*
#include <stdio.h>

int till_n(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    return x + till_n(x-1);
}

int main()
{
    int num = printf("Enter a number: ");
    scanf("%d", &num);

    int result = till_n(num);
    printf("Sum till Entered Number: %d\n", result);
}
*/