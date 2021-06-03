//Define  a  Structure  with  the  following  3  members: Name,  Empcode,  Salary  of  an  employee.  Write  a  C program to read and display the details of employee. 
 
#include <stdio.h>
 
//structure declaration
struct employee{
    char name[50];
    int empCode;
    float salary;
};
 
int main()
{
    //declare structure variable
    struct employee emp;
     
    //read employee details
    printf("\nEnter Employee Details\n");
    printf("Name: ");          
    gets(emp.name);
    printf("Employee Code: ");            
    scanf("%d",&emp.empCode);
    printf("Salary: ");        
    scanf("%f",&emp.salary);
     
    //print employee details
    printf("\n---------------------------------------");
    printf("\nEntered Details");
    printf("\n---------------------------------------");
    printf("\nName: \t\t\t%s"   ,emp.name);
    printf("\nEmployee Code: \t%d"     ,emp.empCode);
    printf("\nSalary: \t\t%f",emp.salary);
    printf("\n---------------------------------------");
    return 0;
}
