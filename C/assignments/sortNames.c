
    #include <stdio.h>
    #include <string.h>
    void main()
    {
        //declaring variables
        char name[10][8], tname[10][8], temp[8];
        int i, j, n;
        //accepting number of elements in array
        printf("Enter the value of n: ");
        scanf("%d", &n);
        printf("Enter %d names n \n", n);
        //accepting name array
        for (i = 0; i < n; i++) 
        {
            scanf("%s", name[i]);
            strcpy(tname[i], name[i]);
        }
 
        for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcasecmp(name[i], name[j]) > 0) 
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
            }
        }
 
        printf("\n----------------------------------------\n");
        printf("Input NamestSorted names\n");
        printf("------------------------------------------\n");
 
        for (i = 0; i < n; i++) 
        {
            printf("%s\t\t%s\n", tname[i], name[i]);
        }
 
        printf("------------------------------------------\n");
 
    }
