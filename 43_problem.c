/*
Scholarship on Fees
Accept the percentage marks of a student and the yearly fee. Give a
scholarship (fee waiver) as per the table.
    Percentage      Fee Waiver
    90 and above    100%
    80 - 89         50%
    70 - 79         25%
    Below 70        Nil
Print the waiver amount and the fee the student has to pay.
Print "Invalid percentage" if the input is less than 0 or greater than 100.
*/

#include <stdio.h>
int main(){
    int percentage, yearly_fee;
    float waiver_amt, pay_fee;
    printf("\n");
    printf("===== SCHOLARSHIP =====\n\n");
    printf("Enter the percentage : ");
    scanf("%d", &percentage);
    printf("Enter the yearly fees : ");
    scanf("%d", &yearly_fee);
    if(percentage<0 || yearly_fee<0 || percentage>100){
        printf("Invalid input");
    }
    else{
        if(percentage>=90 && percentage<=100){
            waiver_amt = 1*yearly_fee;
            pay_fee = yearly_fee - waiver_amt;
            printf("100%% scholarship is applied\n");
        }
        else if(percentage>=80 && percentage<=89){
            waiver_amt = 0.5*yearly_fee;
            pay_fee = yearly_fee - waiver_amt;
            printf("50%% scholarship is applied\n");
        }
        else if(percentage>=70 && percentage<=79){
            waiver_amt = 0.25*yearly_fee;
            pay_fee = yearly_fee - waiver_amt;
            printf("25%% scholarship is applied\n");
        }
        else{
            waiver_amt = 0*yearly_fee;
            pay_fee = yearly_fee - waiver_amt;
            printf("No scholarship applied\n");
        }
        printf("Waiver amount : %.2f\n", waiver_amt);
        printf("Fees to be paid after the scholarship : %.2f", pay_fee);
    }
    return 0;
}