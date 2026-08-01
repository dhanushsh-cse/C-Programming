#include<stdio.h>
int main()
{
    int i, n, a = 0, b = 1, c;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    printf("Fibonacci series\n");

    for(i = 1; i <= n; i++){
        printf(" %d",a);
        c = a + b;
        b = a;
        a = c;
    }
    return 0;
}