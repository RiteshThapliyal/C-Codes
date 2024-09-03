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

    if (org_num == rev_num)
    {
        printf("Entered Number is Palindrome.\n");
    }
    else
    {
        printf("Entered Number is not Palindrome.\n");
    }

}