#include <stdio.h>
#include <string.h>
void main()
{
    int i, j, n;
    char name[50][50], name2[50][50], temp[50];
    printf("Enter the value of n \n");
    scanf("%d", &n);
    printf("Enter %d names n \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
        strcpy(name2[i], name[i]);
    }
    for (i = 0; i < n - 1 ; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("sorted names: ");
    for (i = 0; i < n; i++)
        printf("%s ", name[i]);
}
