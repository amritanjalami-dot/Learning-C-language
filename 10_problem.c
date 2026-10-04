// A student qualifies for a scholarship based on these rules. Read attendance percentage, marks percentage, and family income (in lakh rupees per year).

// Attendance must be at least 75, otherwise "Not eligible: low attendance"
// If marks are 90 or above and income is below 5: Full scholarship
// If marks are 80 or above and income is below 8: Half scholarship
// If marks are 70 or above and income is below 3: Quarter scholarship
// Otherwise: Not eligible

#include <stdio.h>
int main(){
    int attendence;
    int marks;
    int income;
    printf("\n");
    printf("=====SCHOLARSHIP ELIGIBILITY=====\n");
    printf("\n");
    printf("Enter the attendence percentage of the student: ");
    scanf("%d", &attendence);
    printf("Enter the marks percentage of the student: ");
    scanf("%d", &marks);
    printf("Enter the family income in lakhs: ");
    scanf("%d", &income);
    if (attendence<75){
        printf("Not eligible : Low attendence");
    }
    else if (attendence>=75){
        printf("Eligible for the scholarship\n");
        if (marks>=90 && income<5){
            printf("Full Scholarship");
        }
        else if (marks>=80 && income<8 && income>5){
            printf("Half Scholarship");
        }
        else if (marks>=70 && income<3){
            printf("Quarter Scholarship");
        }
        else {
            printf("Not eligible for the scholarship");
        }
    }
    return 0;
}