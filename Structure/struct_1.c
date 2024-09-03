// create a structure type person with name
// age, salary. Initialize it with two person
// and print once age and others name.

#include <stdio.h>
#include <string.h>

struct Person{
    char name[30];
    int age;
    float salary;
};

int main()
{
    struct Person s1 = {"Niraj", 20, 20000.5};
    struct Person s2 = {"Ronit", 19, 10000.5};

    printf("Age of first person: %d\n", s1.age);
    printf("salary of first person: %.1f\n", s1.salary);
    printf("name of second person: %s\n", s2.name);


    return 0;
}