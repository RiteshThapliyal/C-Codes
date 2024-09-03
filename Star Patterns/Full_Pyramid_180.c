#include <stdio.h>

int main()
{
    int num = printf("Enter a Number: ");
    scanf("%d", &num);      

    int star = 1;

    for (int row = 1; row <= num * 2 - 1; row++)
    {
        for (int col = 1; col <= star; col++)
        {
            printf("* ");
        }
        printf("\n");

        if (row < num)
        {
            star++;
        }
        else
        {
            star--;
        }
    }
}