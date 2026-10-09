// A city bus charges by distance. Read the distance in km and the passenger type (a adult, s student, c senior).
// First 10 km: Rs. 2 per km
// Beyond 10 km: Rs. 1.50 per km for the extra distance
// Students get 50% off, seniors get 40% off, adults pay full
// If the final fare is below Rs. 10, charge Rs. 10 (minimum fare)

#include <stdio.h>

int main() {
    int distance;
    char passenger_type;
    float fare, discount, final_fare;
    printf("\n");
    printf("=====CITY BUS CHARGES=====\n\n");
    printf("Enter the distance in km : ");
    scanf("%d", &distance);
    printf("\nPassenger Type : \n");
    printf("adult = a\n");
    printf("student = s\n");
    printf("senior = c\n");
    printf("Enter the passenger type : ");
    scanf(" %c", &passenger_type);
    if (distance <= 0 || (passenger_type != 'a' && passenger_type != 's' && passenger_type != 'c')) {
        printf("\nInvalid input\n");
        return 0;
    }
    if (distance <= 10) {
        fare = distance * 2;
    } 
    else {
        fare = 10 * 2 + (distance - 10) * 1.50;
    }
    printf("\nBase fare for %d km : Rs %.2f\n", distance, fare);
    if (passenger_type == 'a') {
        discount = 0;
        printf("For adults there is no discount. They have to pay the full fare.\n");
    } 
    else if (passenger_type == 's') {
        discount = fare * 0.50;
        printf("Student discount (50%%) : Rs %.2f\n", discount);
    } 
    else {
        discount = fare * 0.40;
        printf("Senior discount (40%%) : Rs %.2f\n", discount);
    }
    final_fare = fare - discount;
    if (final_fare < 10) {
        final_fare = 10;
        printf("Minimum fare applied.\n");
    }
    printf("Final fare : Rs %.2f\n", final_fare);
    return 0;
}