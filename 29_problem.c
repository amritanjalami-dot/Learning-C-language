// Telephone Bill. Read the number of calls made.
// First 100 calls: free
// Next 200 calls (101 to 300): Rs. 1.00/call
// Next 300 calls (301 to 600): Rs. 1.50/call
// Above 600 calls: Rs. 2.00/call
// A fixed rental of Rs. 200 is added, then 18% GST is charged on the total (rental + call charges).

#include <stdio.h>
int main() {
    int call;
    float bill, rental, subtotal, gst, total_bill;
    printf("\n");
    printf("=====TELEPHONE BILL=====\n\n");
    printf("Enter the number of calls made : ");
    scanf("%d", &call);
    if (call < 0){
        printf("Invalid input\n");
    } 
    else {
        rental = 200;
        if (call <= 100) {
            bill = 0;
        } 
        else if (call <= 300) {
            bill = (call - 100) * 1.00;
        }
        else if (call <= 600) {
            bill = 200 * 1.00 + (call - 300) * 1.50;
        }
        else {
            bill = 200 * 1.00 + 300 * 1.50 + (call - 600) * 2.00;
        }
        subtotal = bill + rental;
        gst = 0.18 * subtotal;
        total_bill = subtotal + gst;
        printf("\nCall charges : Rs. %.2f\n", bill);
        printf("Rental : Rs. %.2f\n", rental);
        printf("GST (18%) : Rs. %.2f\n", gst);
        printf("Total bill : Rs. %.2f\n", total_bill);
    }
    return 0;
}