// copy two structures.

#include <stdio.h>
#include <string.h>

struct Student_details
{
    char name[30];
    int age;
    int marks;
    char address[30];
};

int main()
{
    struct Student_details s1, s2;

    strcpy(s1.name, "Ritesh");
    s1.age = 20;
    s1.marks = 98;
    strcpy(s1.address, "Uttarakhand");

    s2 = s1;

    printf("%s\n%d\n%d\n%s\n", s2.name, s2.age, s2.marks, s2.address);

    return 0;
}