#include<stdio.h>
int main()
{
    int n, i, temp;
    printf("Enter Number of elements: ");
    scanf("%d", &n);
    temp=(n-1);
    int a[n], b[n], c[n];
    for(i=0;i<n;i++)
    {
        printf("Enter Element %d of %d: ", (i+1), n);
        scanf("%d", &a[i]);
        b[temp] = a[i];
        temp--;
    }
    printf("\nResultant Array C: ");
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d ", c[i]);
    }
    return 0;
}
