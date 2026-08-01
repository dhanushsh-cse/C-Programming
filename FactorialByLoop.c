#include<stdio.h>
int main()
{
    int fact = 1;
    int n, i;
    printf("Enter the value for n: ");
    scanf("%d", &n);
    if(n < 0){
        printf("Factorial is not defined for Negative Numbers");
    }
    else{
        for(i = 1; i <= n; i++){
            fact *= i;
        }
        printf("Factorial of %d is: %d", n, fact);
    }
    return 0;
}