#include<stdio.h>
int main()
{
    int arr1[10][15];
    int i, j, row, column;
    printf("Enter the size of row and column: ");
    scanf("%d %d", &row, &column);

    printf("Enter Array of Elements to be stored in row and column: \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("2D Array Elements\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}