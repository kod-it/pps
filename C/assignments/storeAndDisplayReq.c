//Write  a  C  program  to  input  information  about  n students  in  a  class  given  the  following:  Roll  number, student  name,  total  marks.    
//The  program  should output  the  marks  of  a  specified  student  given  his/her roll number. 
#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
} s[100];

int main()
{
    int i,n;
    struct student s[100];
    printf("****************************************************\n");
    printf("Enter total of students: ");
    scanf("%d",&n);
    printf("---------------------------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("Enter information of student %d:\n",i+1);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
        printf("   --------------    \n");
    }
    printf("---------------------------------------------------\n");
    int temp;
    printf("Enter Roll to fetch data: ");
    scanf("%d", &temp);
    printf("---------------------------------------------------\n");
    i=temp-1;
    printf("\t Roll Number \t %d\n",s[i].roll);
    printf("\t Name \t\t %s\n ",s[i].name);
    printf("\t Marks \t\t %.1f\n\n",s[i].marks);
    printf("---------------------------------------------------\n");
    printf("****************************************************\n");
    return 0;
}
