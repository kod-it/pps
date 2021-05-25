#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the Number of ROWS: ");
    scanf("%d",&n);
    m=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m-1;j++)
            printf(" \t");
        for(int k=1;k<=2*i-1;k++)
            printf("*\t");
        m--;
        printf("\n");
    }
    return 0;
}
