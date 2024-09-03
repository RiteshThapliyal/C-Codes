#include <stdio.h>

int main()
{
    int num = printf("Enter the Number: ");
    scanf("%d", &num);

    int pow = printf("Enter the Power of Number: ");
    scanf("%d", &pow);

    int answer = 1;

    for (int i = 1; i <= pow; i++)
    {
        answer *= num;
    }

    printf("%d\n", answer);
}