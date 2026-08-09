#include<stdio.h>

int main()
{
    int arr1[5], arr2[5];
    int i, Sumarr[5];

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
        Sumarr[i] = arr1[i] + arr2[i];
        printf("Sumarr Elements at index %d is: %d\n", i, Sumarr[i]);
    }
    return 0;
}