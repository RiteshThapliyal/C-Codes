#include <stdio.h>
#include <stdbool.h>

int calc_hcf(int n1, int n2)
{
    int container;

    while(true)
    {
        if (n1 >= n2)
        {
            container = n1 % n2;
            if (container == 0)
            {
                printf("HCF is: %d\n", n2);
                return 0;
            }
            else
            {
                n1 = n2;
                n2 = container;
            }
        }
        else
        {
            container = n2 % n1;
            if (container == 0)
            {
                printf("HCF is: %d\n", n1);
                return 0;
            }
            else
            {
                n2 = n1;
                n1 = container;
            }
        }
    }
    return 0;
}

int main()
{
    int num_1, num_2;
    printf("HCF CALCULATOR\n");

    printf("Enter First Number: ");
    scanf("%d", &num_1);

    printf("Enter Second Number: ");
    scanf("%d", &num_2);

    if (num_1 <= 0 || num_2 <= 0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    calc_hcf(num_1, num_2);

    return 0;
}