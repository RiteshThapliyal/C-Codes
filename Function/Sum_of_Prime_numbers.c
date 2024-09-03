// Number is expressed as sum of prime numbers

#include <stdio.h>
#include <stdbool.h>

int isprime_numbers(int x)
{
    if (x <= 1)
    {
        return false;
    }
    for (int k = 2; k <= x; k++)
    {
        if (x % k == 0)
        {
            if (x == k)
            {
                return true;
                break;
            }
            else
            {
                return false;
                break;
            }
        }
    }
    return true;
}

void calc_prime_number_list(int storage, int prime_numbers[])
{
    int index = 0;
    for (int i = 2; i <= storage; i++)
    {
        if (isprime_numbers(i))
        {
            prime_numbers[index] = i;
            index ++;
        }
    }
}

void prime_sum(int user_input, int storage, int prime_numbers[])
{
    for (int i = 0; i < storage; i++)
    {
        for (int j = 1; j < storage; j++)
        {
            if (prime_numbers[i] + prime_numbers[j] == user_input)
            {
                printf("%d can be Expressed as the sum of %d and %d.\n", user_input, prime_numbers[i], prime_numbers[j]);
                return;
            }
        }
    }
    printf("%d can not be Expressed as the sum of Two Prime Numbers.\n", user_input);
}

int main()
{
    int user_input;
    printf("Enter any Number: ");
    scanf("%d", &user_input);

    int storage = user_input;
    int prime_numbers[storage];

    calc_prime_number_list(storage, prime_numbers);
    prime_sum(user_input, storage, prime_numbers);

    return 0;
}