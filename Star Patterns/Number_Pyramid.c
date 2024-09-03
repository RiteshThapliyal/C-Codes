#include <stdio.h>

int main() {

    int num = printf("Enter the length of Star Pattern: ");
    scanf("%d", &num);

    for (int row = 1; row <= num; row ++)
    {
        for (int col = 1; col <= num; col ++)
        {
            if (col >= num - row + 1)
            {
                printf("%d ", row);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Inverted Number Pyramid 

#include <stdio.h>

int main() {

    int num = printf("Enter the length of Star Pattern: ");
    scanf("%d", &num);

    for (int row = 1; row <= num; row ++)
    {
        for (int col = 1; col <= num; col ++)
        {
            if (col >= num - row + 1)
            {
                printf("%d ", col);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// same number pyramid

#include <stdio.h>

int main() {

    int num = printf("Enter the length of Star Pattern: ");
    scanf("%d", &num);

    for (int row = 1; row <= num; row ++)
    {
        for (int col = 1; col <= num; col ++)
        {
            if (col >= num - row + 1)
            {
                printf("%d ", num - row + 1);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}