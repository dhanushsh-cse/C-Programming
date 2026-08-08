#include<stdio.h>

int main()
{
    int size, i;
    int arr[25];

    printf("Number of Elements to Store: ");
    scanf(" %d", &size);

    printf("Enter the Elements: ");
    for( i = 1; i <= size; i++)
    {
        scanf(" %d", &arr[i]);
    }

    printf("Array of Elements: arr[%d]= ", arr[size]);
    for( i = 1; i <= size; i++)
    {
        printf(" %d", arr[i], i);
    }
    return 0;
}