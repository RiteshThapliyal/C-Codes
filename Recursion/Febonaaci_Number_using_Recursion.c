#include <stdio.h>

int fibo(int x)
{
    if (x == 0 || x == 1)
    {
        return x;
    }
    return fibo(x-1) + fibo(x-2);
}

int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num); 

    if (num < 0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    int result = fibo(num);   
    printf("Fibonaaci Number: %d\n", result);
}