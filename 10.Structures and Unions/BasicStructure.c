#include<stdio.h>

struct student{
    int rollno;
    char name[20];
    float marks;
};

int main()
{
    struct student S1 = {6, "XYZ", 95.6};
    struct student S2 = {5, "PQR", 93.9};

    printf("Info of Student S1\n");
    printf("Roll No: %d, Name: %s, Marks: %f\n", S1.rollno, S1.name, S1.marks);
    printf("Info of Student S2\n");
    printf("Roll No: %d, Name: %s, Marks: %f",S1.rollno, S1.name, S1.marks);
    return 0;
}