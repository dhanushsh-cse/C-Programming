#include<stdio.h>

int main()
{
    int arr1[5], arr2[5];
    int i;

    printf("Enter the arr1 elements: ");
    for(i = 0; i < 5; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter arr2 elements: ");
    for(i = 0; i < 5; i ++){
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < 5; i++){
        printf("\nIndex at %d:\n",i);
        
        printf("Addition of 2 Arrays: %d\n", arr1[i] + arr2[i]);
        printf("Subtraction of 2 Arrays: %d\n", arr1[i] - arr2[i]);
        printf("Multiplication of 2 Arrays: %d\n", arr1[i] * arr2[i]);
        
        if(arr2[i] != 0){
            printf("Division of 2 Arrays: %d\n", arr1[i] / arr2[i]);
            printf("Modulus of 2 Array: %d\n", arr1[i] % arr2[i]);
        }
    }
    return 0;
}