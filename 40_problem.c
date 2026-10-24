/*
Bus Fare by Distance                           
-----------------------------------------------------
Accept the distance in km and print the fare.

    Distance        Fare
    Up to 5 km      Rs. 10 flat
    6 - 20 km       Rs. 10 + Rs. 2 per km above 5
    21 - 50 km      Previous fare + Rs. 1.5 per km above 20
    Above 50 km     Previous fare + Rs. 1 per km above 50
*/

#include <stdio.h>
int main() {
    int distance;
    float fare;
    printf("\n=====BUS FARE=====\n\n");
    printf("Enter the distance in kilometer : ");
    scanf("%d", &distance);
    if (distance < 0){
        printf("Invalid input\n");
    }
    else{
        if (distance <= 5){
            fare = 10;
        }
        else if (distance <= 20){
            fare = 10 + (distance - 5) * 2;
        }
        else if (distance <= 50){
            fare = (10 + 15*2) + (distance - 20) * 1.5;
        }
        else{
            fare = (10 + 15*2 + 30*1.5) + (distance - 50) * 1;
        }
        printf("Fare for %d km is %.2f\n", distance, fare);
    }
    return 0;
}