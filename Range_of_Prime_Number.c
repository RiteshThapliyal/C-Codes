#include <stdio.h>

int main() {

    int num = printf("Enter the Range of prime number you want: ");
    scanf("%d", &num);

    int range = 2;

    for (int i = 1; i <= num;)
    {
        int count = 0;

        for (int j = 2; j <= range; j++)
        {
            if (range % j == 0)
            {
                count ++;
            }
        }

        if (count == 1)
        {
            printf("%d\n", range);
            i ++;
        }

        range ++;
    }
}