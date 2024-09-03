#include <stdio.h>

#define area_of_rectangle(l, b) (l * b)

int main()
{
    int l1, b1;

    printf("Enter the Length of Rectangle: ");
    scanf("%d", &l1);

    printf("Enter the Breadth of Rectangle: ");
    scanf("%d", &b1);

    printf("Area of Rectangle: %d m-square.\n", area_of_rectangle(l1, b1));

    return 0;
}