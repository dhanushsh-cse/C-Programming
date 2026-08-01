#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the value for a: ");
    scanf("%d", &a);
    printf("Enter the value for b: ");
    scanf("%d", &b);
    printf("Before Swap:\n a is %d\n b is %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After Swap:\n a is %d\n b is %d", a, b);
}