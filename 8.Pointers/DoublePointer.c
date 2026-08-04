#include<stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;
    printf("Value of a and *p is %d %d\n", a, *p);
    printf("Address of a is %x and p is %x",p ,q);
    printf("%d\n", **q);
    printf("%d\n", ***r);
    return 0;
}