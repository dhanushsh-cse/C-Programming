#include<stdio.h>
int main()
{
    int a[6] = {10,12,22,33,35,46};
    int *p = &a[0];
    int *q = &a[4];
    printf("Value is %d and Address of Element is %x\n", *p, p);
    printf("Value is %d and Address of Element is %x\n", *q, q);
    printf("q - p: %d\n", q - p);
    printf("p - q: %d\n",p - q);
    q = q - 2;
    printf("q - 2: %d\n", *q);
    printf("q - 1: %d\n", q - 1);
    p = p - 2;
    printf("p - 2: %d\n", *p);
    printf("p - 1: %d", p - 1);
    return 0;
}