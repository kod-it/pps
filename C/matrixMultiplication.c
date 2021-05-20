#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
    printf("Enter Number of ROWS=");
    scanf("%d",&r);
    printf("Enter Number of COLUMNS=");
    scanf("%d",&c);
    //accepting FIRST MATRIX
    printf("enter the first matrix element=\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    //accepting SECOND MATRIX
    printf("enter the second matrix element=\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);
    //performing MULTIPLICATION
    printf("multiply of the matrix=\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mul[i][j]=0;
            for(k=0;k<c;k++)
                mul[i][j]+=a[i][k]*b[k][j];
        }
    }
    //printing RESULTANT MATRIX
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d\t",mul[i][j]);
        printf("\n");
    }
    return 0;
}
