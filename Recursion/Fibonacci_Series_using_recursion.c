#include <stdio.h>

int fibonacci(int x)
{
    if (x >= 0 && x <= 1)
    {
        return x;
    }
    return fibonacci(x-1) + fibonacci(x-2);
}

void series_ofFibonacciNumber(int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main()
{
    int num;
    printf("Enter the Number of Series: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Enter Non-Negative Integer.\n");
        return 0;
    }

    series_ofFibonacciNumber(num);
}