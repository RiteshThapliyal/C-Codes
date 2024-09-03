#include <stdio.h>

int main()
{
    int num = printf("Enter the Number you want to find the factorial: ");
    scanf("%d", &num);

    int result = 1;

    for (int i = 1; i <= num; i++)
    {
        result = result * i;
    }
    printf("Factorial of Entered Number is: %d\n", result);
}