#include <stdio.h>

union employee
{
    int id;
    float salary;
    char name[20];
};

int main()
{
    union employee e1;

    printf("Enter ID: ");
    scanf("%d", &e1.id);
    printf("ID = %d\n", e1.id);

    printf("\nEnter Salary: ");
    scanf("%f", &e1.salary);
    printf("Salary = %.2f\n", e1.salary);

    printf("\nEnter Name: ");
    scanf("%19s", e1.name);
    printf("Name = %s\n", e1.name);

    return 0;
}