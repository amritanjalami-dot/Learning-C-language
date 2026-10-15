// Calculate the total electricity bill.
// First 50 units: Rs. 0.50/unit, next 100: Rs. 0.75/unit,
// next 100: Rs. 1.20/unit, above 250: Rs. 1.50/unit.
// An additional surcharge of 20% is added to the bill.

#include <stdio.h>
int main() {
    float units, bill, surcharge, total;
    printf("Enter the units consumed : ");
    scanf("%f", &units);
    if (units < 0) {
        printf("Invalid input\n");
    } else {
        if (units <= 50) {
            bill = units * 0.50;
        } else if (units <= 150) {
            bill = 50 * 0.50 + (units - 50) * 0.75;
        } else if (units <= 250) {
            bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
        } else {
            bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
        }
        surcharge = 0.20 * bill;
        total = bill + surcharge;
        printf("Bill amount : Rs. %.2f\n", bill);
        printf("Surcharge (20%) : Rs. %.2f\n", surcharge);
        printf("Total bill : Rs. %.2f\n", total);
    }
    return 0;
}