/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
struct employee
{
     int e;
     char name[20];
     char designation[20];
     char dept[20];
     int sal;
};
int main()
{
     struct employee a;
     printf("Enter Employee Details:\n");
     printf("-------------------------------\n");
     printf("Enter Employee-Id : ");
     scanf("%d",&a.e);
     printf("Enter Name        : ");
     scanf("%s",a.name);
     printf("Enter Designation : ");
     scanf("%s",a.designation);
     printf("Enter Department  : ");
     scanf("%s",a.dept);
     printf("Enter Salary      : ");
     scanf("%d",&a.sal);
     printf("-------------------------------");
     printf("\nEmployee Details: \n---------------------------------\n");
     printf("Employee-Id : %d\n",a.e);
     printf("Name        : %s\n",a.name);
     printf("Designation : %s\n",a.designation);
     printf("Department  : %s\n",a.dept);
     printf("Salary      : %d\n",a.sal);
     return 0;
}
