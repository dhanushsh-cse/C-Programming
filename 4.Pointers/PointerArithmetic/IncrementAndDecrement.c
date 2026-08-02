#include <stdio.h>

int main()
{
    int a[9] = {1,2,3,4,5,6,7,8,9};
    int *p = &a[4];   // Points to element 5

    printf("Initial Value = %d\n", *p);
    printf("Initial Address = %p\n\n", (void *)p);

    // Pre Increment
    printf("Pre Increment:\n");
    printf("Value = %d\n", ++(*p));   // 5 becomes 6
    printf("Current Value = %d\n\n", *p);

    // Post Increment
    printf("Post Increment:\n");
    printf("Value = %d\n", (*p)++);   // Prints 6, then becomes 7
    printf("Current Value = %d\n\n", *p);

    // Pre Decrement
    printf("Pre Decrement:\n");
    printf("Value = %d\n", --(*p));   // 7 becomes 6
    printf("Current Value = %d\n\n", *p);

    // Post Decrement
    printf("Post Decrement:\n");
    printf("Value = %d\n", (*p)--);   // Prints 6, then becomes 5
    printf("Current Value = %d\n\n", *p);

    // Pointer Increment
    printf("Pointer Increment:\n");
    p++;
    printf("Value = %d\n", *p);       // 6
    printf("Address = %p\n\n", (void *)p);

    // Pointer Decrement
    printf("Pointer Decrement:\n");
    p--;
    printf("Value = %d\n", *p);       // 5
    printf("Address = %p\n", (void *)p);

    return 0;
}