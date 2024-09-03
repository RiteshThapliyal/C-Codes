#include <stdio.h>

int main() {

    int num = printf("Enter the Number: ");
    scanf("%d", &num);

    int org_num = num;

    int rev_num = 0;

    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    printf("Reverse of %d is: %d.\n", org_num, rev_num);

}

/*

num = 4562 

rev_num = 0

rev_num = rev_num *10 + num%10 = 2 
num = num/10 = 456

rev_num = rev_num *10 + num%10 = 20 + 6 = 26 
num = num/10 = 45

rev_num = rev_num *10 + num%10 = 260 + 5 = 265 
num = num/10 = 4

rev_num = rev_num *10 + num%10 = 2650 + 4 = 2654 
num = num/10 = 0

*/