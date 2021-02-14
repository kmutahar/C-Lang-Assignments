#include "emp_struct.c"
#include <stdio.h>
#include <string.h>

struct emp_struct emp[];

int num_emp;

void DataEntry();
void Options();
void SalaryAfterTax();
void SalaryAfterDeduction();
void AnnualSalary();
void RetiredEmployee();
void WorkingEmployee();
void AllEmployee();
void ExitProgram();

int main()
{
    DataEntry();
    return 0;
}

void DataEntry()
{
    printf("Number of Employees\n");
    scanf("%d", &num_emp);
    emp[num_emp];

    for (int i = 0; i < num_emp; i++) {
        printf("Name of Employee %d\n", i + 1);
        scanf("%s", emp[i].name);

        printf("Age of Employee %d\n", i + 1);
        scanf("%d", &emp[i].age);

        if (emp[i].age >= 60) {
            strcpy(emp[i].status, "Retired");
        } else {
            strcpy(emp[i].status, "Working");
        }

        printf("Monthly Salary of Employee %d\n", i + 1);
        scanf("%f", &emp[i].salary);
    }

    printf("\n\n");
    Options();
}

void Options()
{
    printf("Enter an option:\n");
    printf("1. Salary After Tax\n");
    printf("2. Salary After Deduction\n");
    printf("3. Annual Salary\n");
    printf("4. Retired Employee Details\n");
    printf("5. Working Employee Details\n");
    printf("6. All Employee Details\n");
    printf("7. Exit\n");

    int option;
    scanf("%d", &option);
    switch (option) {
    case 1:
        SalaryAfterTax();
        break;
    case 2:
        SalaryAfterDeduction();
        break;
    case 3:
        AnnualSalary();
        break;
    case 4:
        RetiredEmployee();
        break;
    case 5:
        WorkingEmployee();
        break;
    case 6:
        AllEmployee();
        break;
    case 7:
        ExitProgram();
        break;
    default:
        printf("Not a valid option\n");
    }
}

void SalaryAfterTax()
{
    printf("Salary After Tax for Each Employee\n");
    for (int i = 0; i < num_emp; i++) {
        if (emp[i].status == "Working") {
            printf("%s\t %f\n", emp[i].name, emp[i].salary * .08);
        } else {
            printf("%s\t %f\n", emp[i].name, emp[i].salary * .05);
        }
    }
    printf("\n");
    Options();
}

void SalaryAfterDeduction()
{
    int check = 0;
    int i;
    printf("Employee Name\n");
    char temp_name[50];
    scanf("%s", temp_name);
    printf("Amount To Be Deducted\n");
    float DeductedAmount;
    scanf("%f", &DeductedAmount);
    for (i = 0; i < num_emp; i++) {
        if (strcmp(temp_name, emp[i].name) == 0) {
            printf("Amount deducted from Employee %s is %f \n", emp[i].name, emp[i].salary = emp[i].salary - DeductedAmount);
        }
    }

    printf("\n");
    Options();
}

void AnnualSalary()
{
    printf("Annual Salary List\n");
    for (int i = 0; i < num_emp; i++) {
        printf("Annual Salary for Emoplyee %s is %f \n,", emp[i].name, emp[i].salary * 12);
    }
    printf("\n");
    Options();
}

void RetiredEmployee()
{
    printf("Retired Employee Info\n");
    for (int i = 0; i < num_emp; i++) {
        if (emp[i].age >= 60) {
            printf("Name: %s\n ", emp[i].name);
            printf("Age: %d\n ", emp[i].age);
            printf("Status: %s\n ", emp[i].status);
            printf("Salary: %f\n ", emp[i].salary);
        }
    }
    printf("\n");
    Options();
}

void WorkingEmployee()
{
    printf("Working Employee Info\n");
    for (int i = 0; i < num_emp; i++) {
        if (emp[i].age < 60) {
            printf("Name: %s\n ", emp[i].name);
            printf("Age: %d\n ", emp[i].age);
            printf("Status: %s\n ", emp[i].status);
            printf("Salary: %f\n ", emp[i].salary);
        }
    }
    printf("\n");
    Options();
}

void AllEmployee()
{
    for (int i = 0; i < num_emp; i++) {
        printf("Name: %s\n ", emp[i].name);
        printf("Age: %d\n ", emp[i].age);
        printf("Status: %s\n ", emp[i].status);
        printf("Salary: %f\n\n ", emp[i].salary);
    }
    printf("\n");
    Options();
}

void ExitProgram()
{
    exit(0);
}
