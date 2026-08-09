#include<stdio.h>

int main()
{
    int even = 0, odd = 0;
    int i, size;
    int arr[35];
    printf("Enter the size: ");
    scanf("%d",&size);

    printf("Enter the array of elements: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d ",&arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0){
            even += 1;
        }
        else{
            odd += 1;
        }
    }
    printf("Even Elements are: %d\n",even);
    printf("Odd Elements are: %d",odd);
}