#include <stdio.h>

int main()
{
    int num = printf("Enter a Number: ");
    scanf("%d", &num);

    for (int row = 1; row <= num; row++)
    {
        for (int col = 1; col <= num; col++)
        {
            if ((row > 1 && row < num) && (col > 1 && col < num))
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}