/*
Telephone Bill   
-----------------------------------------------------
Calculate the bill from the number of calls made.
Fixed rental = Rs. 200 (charged in every case).

    Calls           Charge (in addition to rental)
    Up to 100       Nil
    101 - 150       Rs. 0.80 per call above 100
    151 - 200       Rs. 1.00 per call above 150 (plus 50 calls at Rs. 0.80)
    Above 200       Rs. 1.20 per call above 200 (plus the earlier slabs)
*/

#include <stdio.h>
int main(){
    int call;
    float bill, total_bill;
    float fixed_charge = 200;
    printf("\n=====TELEPHONE BILL=====\n\n");
    printf("Enter the number of calls made : ");
    scanf("%d", &call);
    if (call < 0){
        printf("Invalid input\n");
    }
    else{
        if (call <= 100){
            bill = 0;
            printf("No extra charges\n");
        }
        else if (call <= 150){
            bill = (call - 100) * 0.80;
        }
        else if (call <= 200){
            bill = (50 * 0.80) + (call - 150) * 1.00;
        }
        else{
            bill = (50 * 0.80) + (50 * 1.00) + (call - 200) * 1.20;
        }
        total_bill = bill + fixed_charge;
        printf("Total bill : %.2f\n", total_bill);
    }
    return 0;
}