// #include <stdio.h>

// int stair(int x)
// {
//     if (x == 0)
//     {
//         return 1;
//     }
//     else if (x < 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return stair(x-1) + stair(x-2) + stair(x-3);
//     }
// }

// int main()
// {
//     int num;
//     printf("Enter Number: ");
//     scanf("%d", &num); 

//     if (num < 0)
//     {
//         printf("Invalid Input.\n");
//         return 1;
//     }

//     int result = stair(num);   
//     printf("%d\n", result);
// }

#include <stdio.h>

int main()
{
    int a = 5;
    int* x = &a;
    *x = 56;
    printf("%d\n", *x);
    return 0;
}