#include <stdio.h>

int main()
{
    int a = 5;

    int *x; //declared a pointer named x.
    x = &a;

    // printf("%p\n", &a);  this line is to check without pointers

    printf("%p\n", x); // %p is used to print the address of the variable.
    printf("%d\n", *x); // *x prints the actual value of the address stored in it.
    printf("%p\n", &x); // this will print the address of x
}