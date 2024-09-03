#include <stdio.h>

int main()
{
    int num = printf("Enter a Number: ");
    scanf("%d", &num);

    int count = 1;
    for (int row = 1; row <= num; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
}