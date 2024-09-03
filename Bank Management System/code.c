#include <stdio.h>
#include "test.c"

// int main()
// {
//     krvao();
// }
int factorial(int range)
{
    int fact = 1;
    for (int i = 1; i <= range; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n = printf("Enter n: ");
    scanf("%d", &n);

    int r = printf("Enter r: ");
    scanf("%d", &r);

    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d ", ncr);

}