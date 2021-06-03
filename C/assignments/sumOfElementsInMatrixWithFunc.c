//Write a program in C to read a matrix of order m*n and print the sum of all elements using functions. 

#include <stdio.h>
int add(int arr1[10][10], int c, int r);
void main()
{
    int arr[10][10];
    int i, j, row, col, s=0;
 
    printf("Number of Rows: ");
    scanf("%d", &row);
    printf("Number of Columns: ");
    scanf("%d", &col);
    printf("Enter the elements of the matrix \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Input matrix is \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
        s = add(arr, col, row);
    printf("Sum of all elements of matrix = %d\n", s);
}

int add(int arr1[10][10], int c, int r)
{
    int sum = 0, j, i;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            sum += arr1[i][j];
    return(sum);
}
