/*
Employee Salary                                  
-----------------------------------------------------
Accept the basic salary and calculate the gross salary.

    Basic Salary            HRA     DA
    Less than Rs. 10,000    10%     80%
    Rs. 10,000 - 20,000     15%     90%
    Above Rs. 20,000        20%     95%

Gross Salary = Basic + HRA + DA.
Print HRA, DA and the gross salary.
*/

#include <stdio.h>
int main(){
    int basic_salary, gross_salary, hra, da;
    printf("\n");
    printf("=====EMPLOYEE SALARY=====\n\n");
    printf("Enter the basic salary of the employee : ");
    scanf("%d", &basic_salary);
    if(basic_salary<0){
        printf("Invalid input");
    }
    else {
        if(basic_salary < 10000){
            hra = 0.10*basic_salary;
            da = 0.80*basic_salary;
            gross_salary = basic_salary + hra + da;
            printf("HRA : %d\n", hra);
            printf("DA : %d\n", da);
            printf("Gross Salary : %d", gross_salary);
        }
        else if(basic_salary >= 10000 && basic_salary <=20000){
            hra = 0.15*basic_salary;
            da = 0.90*basic_salary;
            gross_salary = basic_salary + hra + da;
            printf("HRA : %d\n", hra);
            printf("DA : %d\n", da);
            printf("Gross Salary : %d", gross_salary);
        }
        else{
            hra = 0.20*basic_salary;
            da = 0.95*basic_salary;
            gross_salary = basic_salary + hra + da;
            printf("HRA : %d\n", hra);
            printf("DA : %d\n", da);
            printf("Gross Salary : %d", gross_salary);
        }
    }
    return 0;
}