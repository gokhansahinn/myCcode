#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

//Write 2 functions that allocate dynamically an array of employees
//and reading inputs for each of the elements from the user:
//              -The First function gets the size of the array, allocates the
//               returns the array.
//              -The Second function gets the size of array, and allocates the
//               memory dynamically by updating it by "pointer" (function of void type)
typedef struct 
{
    char name[10];
    float age;
    int id;
}Employee;
Employee* createEmployeeArray(int numberEmployee)
{ 
    Employee * employeeArray;
    employeeArray =(Employee* )malloc(sizeof(Employee)*numberEmployee);
    for(int i=0 ; i<numberEmployee; i++)
    {
        printf("Enter of name %d. Employee: ",i+1);
        scanf("%s",&employeeArray[i].name);
        printf("Enter of age %d. Employee: ",i+1);
        scanf("%lf",&employeeArray[i].age);
        printf("Enter of ID %d. Employee: ",i+1);
        scanf("%d",&employeeArray[i].id);
    }
    return employeeArray;
}
void createEmployeeArray1(Employee** employee,int numberEmployee)
{
    Employee* ptrEmployee;
    ptrEmployee = (Employee*)malloc(sizeof(Employee)*numberEmployee);
    for(int i=0 ; i< numberEmployee ; i++)
    {
        printf("Enter a name of %d.Employee: ",i+1);
        scanf("%s",&ptrEmployee[i].name);
        printf("Enter a age of %d.Employee: ",i+1);
        scanf("%lf",&ptrEmployee[i].age);
        printf("Enter a ID of %d.Employee: ",i+1);
        scanf("%d",&ptrEmployee[i].id);
    }
    *employee = ptrEmployee;
    

}
int main()
{
    Employee* ptrEmployeArr;
    createEmployeeArray1(&ptrEmployeArr,5);
    return 0;
}