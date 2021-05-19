#include<stdio.h>
int main()
{
    int m, n, i, j, sumAboveElem = 0, sumBelowElem = 0;
    printf("Enter the number of ROWS: ");
    scanf("%d", &m);
    printf("Enter the number of COLUMNS: ");
    scanf("%d", &n);
    int a[5][5];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter element at Row: %d and Column: %d :", (i+1),(j+1));
            scanf("%d", &a[i][j]);
            if(j>i)
                sumAboveElem += a[i][j];
            else if(i>j)
                sumBelowElem += a[i][j];
        }
    }
    printf("\nSum of Elements above the diagonal: %d", sumAboveElem);
    printf("\nSum of Elements below the diagonal: %d", sumBelowElem);
    return 0;
}
