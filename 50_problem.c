// Car Rental. Read the distance travelled (in km).
// First 100 km: Rs. 10/km
// Next 200 km (101 to 300): Rs. 8/km
// Above 300 km: Rs. 6/km
// A fixed driver allowance of Rs. 300 is added, then 5% tax is charged on the total
// (distance charges + driver allowance).
// Print "Invalid input" for 0 or negative distance.

#include <stdio.h>
int main(){
    int distance, distance_charge, bill;
    int driver_allowance = 300;
    float tax, total_bill;
    printf("\n");
    printf("===== CAR RENTAL =====\n\n");
    printf("Enter the distance : ");
    scanf("%d", &distance);
    if(distance<=0){
        printf("Invalid input");
    }
    else {
        if(distance<=100){
            distance_charge = distance*10;
        }
        else if(distance>100 && distance<=300){
            distance_charge = (100*10) + (distance-100)*8;
        }
        else {
            distance_charge = (100*10) + (200)*8 + (distance-300)*6;
        }
        bill = distance_charge + driver_allowance;
        tax = 0.05*bill;
        total_bill = bill + tax;
        printf("Total charge : %.1f", total_bill);
    }
    return 0;
}