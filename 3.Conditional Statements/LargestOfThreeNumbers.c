#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the values of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b){
        if(a > c){
            printf("Largest  value is %d", a);
        }
        else{
            printf("Largest value is %d", c);
        }
    }
    else{
        if(b > c){
            printf("Largest value is %d", b);
        }
        else{
            printf("Largest value is %d", c);
        }
    }
    return 0;
}