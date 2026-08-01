#include<stdio.h>
int main()
{
    int a[5] = {11,12,21,32,34};
    int *p = &a[0];
    printf("Value is %d\n", *p);
    printf("Address of element is %x\n", p);
    p = p + 1;
    printf("Value is %d\n", *p);
    printf("Address of element is %x\n", p);
    p + 2;
    printf("Value is %d\n", *p);
    printf("Address of element is %x\n", p);
    p = p + 3;
    printf("Value is %d", *p);
    return 0;
}