#include <stdio.h>
#include <string.h>

struct Employee{
    char name[50];
    int idnumber;
    char position[100];
    int years;
    int salary;
};

int main(){
    char name[50],position[100];
    int idnumber,years,salary,j,i;

    printf("Number of Entries: ");
    scanf("%d",&j);

    for(i=0;i<j;i++){
        struct Employee emp;

        printf("\nEmployee Name: ");
        scanf("%s",name);
        printf("Employee ID Number: ");
        scanf("%d",&idnumber);
        printf("Employee Position in Company: ");
        scanf("%s",position);
        printf("Employee Years of Experience in Company: ");
        scanf("%d",&years);
        printf("Employee Salary: ");
        scanf("%d",&salary);

        strcpy(emp.name,name);
        emp.idnumber = idnumber;
        strcpy(emp.position,position);
        emp.years = years;
        emp.salary = salary;

        printf("\nEmployee Name: %s",name);
        printf("\nEmployee ID Number: %d",idnumber);
        printf("\nEmployee Position: %s",position);
        printf("\nEmployee Years of Work at Company: %d",years);
        printf("\nEmployee Salary: %d \n",salary);

    }
    return 0;
}