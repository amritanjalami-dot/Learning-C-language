/*
Income Tax Calculator                          
-----------------------------------------------------
Accept the annual income and calculate tax by these slabs:

    Income                      Tax
    Up to Rs. 2,50,000          Nil
    Rs. 2,50,001 - 5,00,000     5%
    Rs. 5,00,001 - 10,00,000    20%
    Above Rs. 10,00,000         30%

Tax is applied on the whole income according to the slab it falls in.
Print the tax amount and the income left after tax.
*/

#include <stdio.h>
int main(){
    int income, tax, income_left;
    printf("\n");
    printf("=====INCOME TAX CALCULATOR=====\n\n");
    printf("Enter the annual income of the person : ");
    scanf("%d", &income);
    if(income < 0){
        printf("Invalid input");
    }
    else {
        if(income <= 250000){
            printf("No tax is applied");
        }
        else if (income >= 250001 && income <=500000){
            tax = 0.05*income;
            income_left = income - tax;
            printf("5%% tax is applied\n");
            printf("Tax : %d\n", tax);
            printf("Amount left after paying the tax : %d\n", income_left);
        }
        else if (income >= 500001 && income <=1000000){
            tax = 0.20*income;
            income_left = income - tax;
            printf("20%% tax is applied\n");
            printf("Tax : %d\n", tax);
            printf("Amount left after paying the tax : %d\n", income_left);
        }
        else {
            tax = 0.30*income;
            income_left = income - tax;
            printf("30%% tax is applied\n");
            printf("Tax : %d\n", tax);
            printf("Amount left after paying the tax : %d\n", income_left);
        }
    }
    return 0;
}