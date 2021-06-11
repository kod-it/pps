//smaller element using C
#include<stdio.h>
int main()
{
    int a[2], i, *small;
    printf("Enter two integer numbers: ");
    for(i = 0; i < 2; i++)
        scanf("%d", &a[i]);
    small = &a[0];
    for(i = 1; i < 2; i++)
    {
        if( *(a + i) < *small)
            *small = *(a + i);
    }
    printf("Smaller Element: %d\n", *small);
    return 0;
}
