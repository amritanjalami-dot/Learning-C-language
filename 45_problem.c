/*
Sales Commission
Accept the total sales of a salesman and calculate his commission.
    Sales                       Commission
    Less than Rs. 10,000        2%
    Rs. 10,000 - 50,000         5%
    Above Rs. 50,000            8%
Commission is applied on the whole sales amount.
Print the commission and the total sales including commission.
*/

#include <stdio.h>
int main(){
    float sales, commission, total_sales;
    printf("\n");
    printf("===== SALES COMMISSION =====\n\n");
    printf("Enter the total sales of the salesman : ");
    scanf("%f", &sales);
    if(sales<0){
        printf("Invalid input");
    }
    else{
        if(sales<10000){
            commission = 0.02*sales;
        }
        else if (sales>=10000 && sales<=50000){
            commission = 0.05*sales;
        }
        else{
            commission = 0.08*sales;
        }
        total_sales = sales+commission;
        printf("Commission of the salesman : %.2f\n", commission);
        printf("Total sales of the salesman : %.2f\n", total_sales);
    }
    return 0;
}