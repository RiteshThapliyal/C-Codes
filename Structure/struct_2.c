#include <stdio.h>

struct Student_details
{
    char name[30];
    int rollNumber;
    int age;
    int totalMarks;
};

int main()
{
    struct Student_details s1 = {"Ritesh", 81, 20, 712};
    struct Student_details s2 = {"Niraj", 58, 21, 650};
    struct Student_details s3 = {"Ronit", 95, 20, 755};

    printf("Student 1 details: \nName: %s, RollNo: %d, Age: %d, TotalMarks: %d\n", s1.name, s1.rollNumber, s1.age, s1.totalMarks);
    printf("Student 2 details: \nName: %s, RollNo: %d, Age: %d, TotalMarks: %d\n", s2.name, s2.rollNumber, s2.age, s2.totalMarks);
    printf("Student 3 details: \nName: %s, RollNo: %d, Age: %d, TotalMarks: %d\n", s3.name, s3.rollNumber, s3.age, s3.totalMarks);

    return 0;
}