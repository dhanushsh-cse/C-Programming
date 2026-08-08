#include<stdio.h>

int main()
{
    int size, i;
    int arr[30];

    printf("Enter the size of array: ");
    scanf(" %d", &size);

    printf("Enter the Elements to be stored in:\n");
    for (i = 0; i < size; i++)
    {
        scanf(" %d", &arr[i]);
    }

    printf("Array of Elements in Forward\n");
    for(i = 0; i < size; i++)
    {
        printf("Array Element at index %d is: %d\n", i, arr[i]);
    }

    printf("Array of Elements in Backwar\n");
    for(i = size - 1; i >= 0; i--)
    {
        printf("Array Element at index %d is: %d\n", i, arr[i]);
    }
    return 0;
}