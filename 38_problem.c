/*
Discount on Shopping
-----------------------------------------------------
Accept the total purchase amount and give a discount.

    Purchase Amount             Discount
    Less than Rs. 1,000         0%
    Rs. 1,000 - 4,999           5%
    Rs. 5,000 - 9,999           10%
    Rs. 10,000 and above        20%

Print the discount amount and the final payable amount.
*/

#include <stdio.h>
int main(){
    int purchase_amt, discount, final_amt;
    printf("\n");
    printf("=====DISCOUNT ON SHOPPING=====\n\n");
    printf("Enter the total purchase amount : ");
    scanf("%d", &purchase_amt);
    if(purchase_amt < 0){
        printf("Invalid input\n");
    }
    else {
        if(purchase_amt < 1000){
            discount = 0;
            printf("Discount : %d\n", discount);
        }
        else if(purchase_amt >= 1000 && purchase_amt < 5000){
            discount = 0.05*purchase_amt;
            printf("5%% discount is applied\n");
            printf("Discount : %d\n", discount);
        }
        else if(purchase_amt > 5000 && purchase_amt <10000){
            discount = 0.10*purchase_amt;
            printf("10%% discount is applied\n");
            printf("Discount : %d\n", discount);
        }
        else{
            discount = 0.20*purchase_amt;
            printf("20%% discount is applied\n");
            printf("Discount : %d\n", discount);
        }
        final_amt = purchase_amt - discount;
        printf("Final payable amount : %d\n", final_amt);
    }
    return 0;
}