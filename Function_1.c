/*
Calculate the value of Combination - nCr.

Formula : nCr = n!/(r! * (n-r)!)
*/

#include <stdio.h>

int comb(int x)
{
    int container = 1;
    for (int i = 1; i <= x; i++)
    {
        container *= i;
    }
    return container;
}

int main()
{
    int n = printf("Enter the value of N: ");
    scanf("%d", &n);

    int r = printf("Enter the value of R: ");
    scanf("%d", &r);

    int combination = comb(n) / (comb(r) * comb(n-r));

    printf("Combination is: %d\n", combination);
}