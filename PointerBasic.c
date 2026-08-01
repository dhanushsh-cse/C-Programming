#include<stdio.h>
int main()
{
    int a = 9, b = 10, c, d;
    int *p, *q;
    p = &a;
    q = &b;
    c = *p;
    d = *q;
    printf("Value of a is %d\n", a);
    printf("Value of a is %d\n", *p);
    printf("Value of b is %d\n", b);
    printf("Value of b is %d\n", d);
    printf("Address of a is %x\n", p);
    printf("Address of b is %x", q);
    return 0;
}