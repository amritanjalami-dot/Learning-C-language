/*
Electricity Bill 
-----------------------------------------------------
Write a program to calculate an electricity bill from the units consumed.

    Units                   Rate per unit
    First 100 units         Rs. 5
    Next 100 (101-200)      Rs. 7
    Next 100 (201-300)      Rs. 10
    Above 300 units         Rs. 12

Also add a fixed meter charge of Rs. 50.
*/

#include <stdio.h>
int main(){
    int unit, bill, total_bill;
    int meter_charge = 50;
    printf("\n");
    printf("=====ELETRICITY BILL=====\n\n");
    printf("Enter the number of units consumed : ");
    scanf("%d", &unit);
    if(unit < 0){
        printf("Invalid input");
    }
    else{
        if(unit <= 100){
            bill = unit*5;
        }
        else if (unit > 100 && unit <= 200){
            bill = (100*5) + (unit-100)*7;
        }
        else if (unit > 200 && unit <= 300){
            bill = (100*5 + 100*7) + (unit - 200)*10;
        }
        else {
            bill = (100*5 + 100*7 + 100*10) + (unit - 300)*12;
        }
        total_bill = bill + meter_charge;
        printf("Total Electricity Bill : %d", total_bill);
    }
    return 0;
}