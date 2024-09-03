// count the number of digits in entered number by user.

#include <stdio.h>

int main()
{
    int num, rem = 0, count = 0;
    printf("Enter any Value: ");
    scanf("%d", &num);

    while (num > 0)
    {
        rem = num % 10;
        count ++;
        num /= 10;
    }

    printf("Entered Number have %d digits.\n", count);
    return 0;
}