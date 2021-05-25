#include <stdio.h>
#include <stdlib.h>
void main()
{
    int arr1[50][50], brr1[50][50];
    int i, j, r1, c1, r2, c2, flag =1;
    printf("Input Rows and Columns in 1st matrix :");
    scanf("%d %d", &r1, &c1);
    printf("Input Rows and Columns in 2nd matrix :");
    scanf("%d %d", &r2, &c2);
    //accepting FIRST MATRIX
    printf("Input Elements in the 1st matrix :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
           printf("element - [%d],[%d] : ",i,j);
           scanf("%d",&arr1[i][j]);
        }
    }
    //accepting SECOND MATRIX
    printf("Input elements in the second matrix :\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
           printf("element - [%d],[%d] : ",i,j);
           scanf("%d",&brr1[i][j]);
        }
    }


   if(r1 == r2 && c1 == c2)
   {
    	printf("The Matrices can be compared : \n");
    	for(i=0; i<r1; i++)
    	{
     		for(j=0; j<c2; j++)
     		{
			if(arr1[i][j] != brr1[i][j])
			{
	   			flag = 0;
	   			break;
			}
     		}
   	   }
    }
    else
    {
        printf("The Matrices Cannot be compared :\n");
        exit(1);
    }
    if(flag == 1)
	printf("Both matrices are equal.\n\n");
    else
	printf("But, both matrices are not equal\n\n");
}
