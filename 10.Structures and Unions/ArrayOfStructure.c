#include<stdio.h>

struct student{
    int id;
    char name[20];
    float marks;
};
int main()
{
    int i;
    struct student S[3];
    for( i = 0; i < 3; i++)
    {
        printf("Enter the ID, Name, Marks of Student %d\n", i +1);
        scanf("%d %s %f", &S[i].id, S[i].name, &S[i].marks);
    }
    printf("Student Details\n");
    for( i = 0; i < 3; i++)
    {
        printf("Student %d\n", i + 1);
        printf("%d %s %f\n",S[i].id, S[i].name, S[i].marks);
    }
    return 0;
}