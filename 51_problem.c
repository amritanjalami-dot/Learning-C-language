// Property Tax. Read the area (in sq ft), the property type
// (r = residential, c = commercial) and the age of the owner.
// First 500 sq ft: Rs. 2/sq ft
// Next 500 sq ft (501 to 1000): Rs. 3/sq ft
// Above 1000 sq ft: Rs. 5/sq ft
// Commercial properties pay double the tax.
// Owners aged 60 or above get a 10% rebate on the final tax.
// Print "Invalid input" for 0 or negative area, and "Invalid type" for any other type character.

#include <stdio.h>
int main(){
    int area, age;
    char type;
    float tax, rebate;
    printf("\n");
    printf("===== PROPERTY TAX =====\n\n");
    printf("Enter the area (sq ft) : ");
    scanf("%d", &area);
    printf("Enter the type (r = residential, c = commercial) : ");
    scanf(" %c", &type);
    printf("Enter the age of the owner : ");
    scanf("%d", &age);
    if (area <= 0){
        printf("Invalid input\n");
    } 
    else if (type != 'r' && type != 'c'){
        printf("Invalid type\n");
    } 
    else{
        if(area <= 500){
            tax = area * 2;
        } 
        else if(area <= 1000){
            tax = 500 * 2 + (area - 500) * 3;
        } 
        else{
            tax = 500 * 2 + 500 * 3 + (area - 1000) * 5;
        }
        if(type == 'c'){
            tax = tax * 2;
        }
        if(age >= 60){
            rebate = 0.10 * tax;
        } 
        else{
            rebate = 0;
        }
        tax = tax - rebate;
        printf("\nRebate : Rs. %.1f\n", rebate);
        printf("Tax : Rs. %.1f\n", tax);
    }
    return 0;
}