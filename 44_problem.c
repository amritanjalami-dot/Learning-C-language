// Hotel Bill.
// Read the number of nights stayed.
// First 2 nights: Rs. 2000/night
// Next 3 nights (3rd to 5th night): Rs. 1800/night
// Above 5 nights: Rs. 1500/night
// If the room total is above Rs. 5000, add 12% luxury tax on it. Otherwise no tax.

#include <stdio.h>

int main() {
    int nights;
    float bill, tax, total_bill;
    printf("\n");
    printf("===== HOTEL BILL =====\n\n");
    printf("Enter the number of nights stayed : ");
    scanf("%d", &nights);
    if (nights <= 0) {
        printf("Invalid input\n");
    } else {
        if (nights <= 2) {
            bill = nights * 2000;
        } 
        else if (nights <= 5) {
            bill = 4000 + (nights - 2) * 1800;
        } 
        else {
            bill = 4000 + 3 * 1800 + (nights - 5) * 1500;
        }
        if (bill > 5000) {
            tax = 0.12 * bill;
        }
        else {
            tax = 0;
        }
        total_bill = bill + tax;
        printf("Room total  : Rs. %.2f\n", bill);
        printf("Luxury tax  : Rs. %.2f\n", tax);
        printf("Total bill  : Rs. %.2f\n", total_bill);
    }
    return 0;
}