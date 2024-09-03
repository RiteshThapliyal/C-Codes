// ArmStrong Number Calculator of any digit.

#include <stdio.h>
#include <math.h>

int check_num_digit(int x)
{
    int count = 0, rem;
    while (x > 0)
    {
        rem = x % 10;
        count ++;
        x /= 10;
    }
    return count;
}

void calc_armstrong(int y, int z)
{
    int sum = 0, rem, store;

    store = z;

    while (z > 0)
    {
        rem = z % 10;
        sum = sum + pow(rem, y);
        z /= 10;
    }

    if (store == sum) 
    {
        printf("%d is an Armstrong number.\n", store);
        printf("\n");
    } 
    else 
    {
        printf("%d is not an Armstrong number.\n", store);
        printf("\n");
    }
}

int main()
{
    int user_input;
    printf("Enter any Number: ");
    scanf("%d", &user_input);

    int result = check_num_digit(user_input);
    printf("\n");
    printf("Digits: %d\n", result);

    printf("\n");

    calc_armstrong(result, user_input);
    
    return 0;
}