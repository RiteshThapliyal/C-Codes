#include <stdio.h>

int main()
{
    int num = printf("Enter Length of Fibonacci Series: ");
    scanf("%d", &num);


    if (num <= 0)
    {
        printf("Entered Number is Invalid");
    }

    int num1 = 0;
    int num2 = 1;

    for (int range = 1; range <= num; range++)
    {
        if (range > 2)
        {
            int change = num1 + num2;
            num1 = num2;
            num2 = change;
            printf("%d\n", change);
        }
        if (range == 1)
        {
            printf("%d\n", num1);
        }
        if (range == 2)
        {
            printf("%d\n", num2);
        }
    }
}