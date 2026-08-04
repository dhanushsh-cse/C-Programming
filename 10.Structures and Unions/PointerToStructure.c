#include<stdio.h>

struct student{
    int id;
    float marks;
};
int main()
{
    struct student S1;
    struct student *ptr;
    ptr = &S1;
    printf("Enter ID and marks: ", ptr->id, ptr->marks);
    scanf("%d %f", &ptr->id, &ptr->marks);
    printf("Id: %d, marks: %f", ptr->id, ptr->marks);
}