#include <stdio.h>

int main() {

    int num = printf("Enter the length of Star Pattern: ");
    scanf("%d", &num);

    for (int row = 1; row <= num*2-1; row ++)
    {
        for (int col = 1; col <= row; col ++)
        {
            if (col <= num - row + 1)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}