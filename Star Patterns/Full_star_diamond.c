#include <stdio.h>

int main()
{
    int num = printf("Enter a Number: ");
    scanf("%d", &num);

    for (int row = 1; row <= num; row++)
    {
        for (int col = 1; col <= num; col++)
        {
            if (col < num - row + 1)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    for (int row = 1; row <= num; row++)
    {
        for (int col = 1; col <= num; col++)
        {
            if (col <= row)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}