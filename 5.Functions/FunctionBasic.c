#include<stdio.h>

void sum()
{
    int a, b;
    float sum;
    printf("Enter a value and b value: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %f\n", sum);
}

int main()
{
    sum();
    sum();
    sum();
    return 0;
}