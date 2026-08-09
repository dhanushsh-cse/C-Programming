#include<stdio.h>

int main()
{
    int arr1[5], arr2[5];
    int i;

    printf("Enter the arr1 elements: ");
    for(i = 0; i < 5; i++){
        scanf("%d", &arr1[i]);
    }
    printf("\n");

    printf("Enter arr2 elements: ");
    for(i = 0; i < 5; i ++){
        scanf("%d", &arr2[i]);
    }
    for(i = 0; i < 5; i++){
        printf("Multiplication of Two Arrays at index %d: %d\n", i, arr1[i] * arr2[i]);
    }
    return 0;
}