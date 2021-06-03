#include <stdio.h>  
int fact(int z);  
void main()  
{  
    int n, r, nCr;  
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    nCr = fact(n) / (fact(r) * fact(n - r));  
    printf("\nnCr = %d", nCr);  
}  
//recursive function for finding factorial
int fact(int z)  
{  
    if (z>=1)
        return z*fact(z-1);
    else
        return 1;
}  
