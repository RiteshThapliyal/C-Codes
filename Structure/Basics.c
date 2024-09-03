// structures

#include <stdio.h>
#include <string.h>

struct cricket{
    char name[30];
    int runs;
    int matches;
};

int main()
{
    struct cricket c1;

    strcpy(c1.name, "Ritesh");
    c1.runs = 100;
    c1.matches = 2;

    printf("Batsman Name: %s\n", c1.name);
    printf("Batsman runs: %d\n", c1.runs);
    printf("Batsman matches: %d\n", c1.matches);

    return 0;
}

// structures practice

// #include <stdio.h>
// #include <string.h>

// struct Person
// {
//     char name[30];
//     int age;
//     float salary;
// };

// int main()
// {
//     struct Person p1;
//     struct Person p2;

//     // create two personality data
//     strcpy(p1.name, "Ritesh Thapliyal");
//     p1.age = 20;
//     p1.salary = 1000000.5;

//     strcpy(p2.name, "Niraj Kumar");
//     p2.age = 21;
//     p2.salary = 200000.5;

//     // now print the data in the terminal
//     printf("Name of First Person: %s\n", p1.name);
//     printf("Age of First Person: %d\n", p1.age);
//     printf("Salary of First Person: %.f\n", p1.salary);

//     printf("Name of Second Person: %s\n", p2.name);
//     printf("Age of Second Person: %d\n", p2.age);
//     printf("Salary of Second Person: %.f\n", p2.salary);

//     return 0;
// }