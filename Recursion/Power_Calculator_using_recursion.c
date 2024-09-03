#include <stdio.h>

int power_calc(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    return x * power_calc(x, y-1);
}

int main()
{
    int base = printf("Enter Base: ");
    scanf("%d", &base);

    int power = printf("Enter Power: ");
    scanf("%d", &power);

    if (power < 0)
    {
        printf("Invalid Power Entered.\n");
        return 0;
    }

    int result = power_calc(base, power);
    printf("%d to the power %d is: %d\n", base, power, result);
}