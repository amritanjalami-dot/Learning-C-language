/*
Courier Charges
Accept the weight of a parcel in kg and print the courier charge.
    Weight          Charge
    Up to 1 kg      Rs. 50 flat
    1 - 5 kg        Rs. 50 + Rs. 20 per kg above 1
    Above 5 kg      Previous charge + Rs. 15 per kg above 5
*/

#include <stdio.h>
int main(){
    float weight, charge;
    printf("\n");
    printf("===== COURIER CHARGES =====\n\n");
    printf("Enter the weight of the parcel in kg: ");
    scanf("%f", &weight);
    if(weight<0){
        printf("Invalid input");
    }
    else {
        if(weight<1){
            charge = 50.0;
        }
        else if (weight>=1 && weight<=5){
            charge = 50.0+((weight-1.0)*20.0);
        }
        else{
            charge = 50.0+(4.0*20.0)+(weight-5.0)*15.0;
        }
        printf("Courier charge : %.1f", charge);
    }
    return 0;
}