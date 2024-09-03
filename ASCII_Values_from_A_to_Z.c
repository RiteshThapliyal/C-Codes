#include <stdio.h>

int main()
{
    // for small alphabets

    for (char alpha = 'a'; alpha <= 'z'; alpha ++)
    {
        printf("%d\n", alpha);
    }

    // for capital alphabets

    for (char alpha = 'A'; alpha <= 'Z'; alpha ++)
    {
        printf("%d\n", alpha);
    }
}