#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[10];
    float age;
    int id;
}Employee;

void printEmployeeData(Employee employee,int numberEmploye)
{
    printf("#%d. Employee Name: %s\n",numberEmploye,employee.name);
    printf("#%d. Employee Age: %f\n",numberEmploye,employee.age);
    printf("#%d. Employee ID: %d\n",numberEmploye,employee.id);
}
void getDataEmployee(Employee* employee,int *numberEmpptr)
{
    printf("number of employe: ");
    scanf("%d",numberEmpptr);    
    printf("What is the name of employee: ");
    scanf("%s",employee->name);
    printf("What is the age of employee: ");
    scanf("%f",employee->age);
    printf("What is the ID of employee: ");
    scanf("%d",employee->id);
}

int main()
{
    Employee employe1,employe2,employe3;
    int numberEmploye;
    getDataEmployee(&employe1,&numberEmploye);
    printEmployeeData(employe1,numberEmploye);    
    getDataEmployee(&employe2,&numberEmploye);
    printEmployeeData(employe2,numberEmploye);
    getDataEmployee(&employe3,&numberEmploye);
    printEmployeeData(employe3,numberEmploye);
    return 0;
}