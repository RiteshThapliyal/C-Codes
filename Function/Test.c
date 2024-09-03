// prime numbers using functions

#include <stdio.h>

int prime(int x)
{
    for (int i = 2; i <= x; i++)
    {
        if (x % i == 0)
        {
            if (x == i)
            {
                return 1;
                break;
            }
            return -1;
        }
    }
}

int main() {
    
    int num, i, result;
    printf("Enter a Number: ");
    scanf("%d", &num);
    
    result = prime(num);
    
    if (result == -1)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }

    return 0;
}