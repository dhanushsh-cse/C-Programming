#include<stdio.h>

int main()
{
    int i, size;
    int marks[30];
    float sum = 0, average;

    printf("Enter the size: ");
    scanf(" %d", &size);

    printf("Enter the Marks to be Stored:\n");
    for(i = 0; i < size; i++)
    {
        scanf(" %d", &marks[i]);
    }

    printf("Array of Marks:\n");
    for(i = 0; i < size; i++)
    {
        printf(" %d", marks[i]);
        sum += marks[i];
    }

    average = sum/size;
    printf("\nSum of Marks is: %.2f\n", sum);
    printf("Average of Marks: %.2f\n", average);

    return 0;
}