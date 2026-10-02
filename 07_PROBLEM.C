// Input a person's age and monthly income. Decide whether they are eligible for a loan:
// Age must be 21–60
// Income must be at least ₹25,000
// Print the reason if they are not eligible.

#include <stdio.h>
int main(){
    int age;
    int income;
    printf("\n");
    printf("=====ELIGIBILITY FOR TAKING LOAN=====");
    printf("\n");
    printf("Enter the age of the person who wants loan: ");
    scanf("%d", &age);
    printf("Enter the income of the person: ");
    scanf("%d", &income);
    printf("\n");
    if(age>20 && age<61 && income>=25000){
        printf("The person is eligible for the loan.");
    }
    else if(age<21 && income>=25000){
        printf("The person is not eligible for the loan.\nREASON : The person age is less than 21 years.");
    }
    else if(age>60 && income>=25000){
        printf("The person is not eligible for the loan.\nREASON : The person age is more than 60 years.");
    }
    else if(age>20 && age<61 && income<25000){
        printf("The person is not eligilbe for the loan.\nREASON : The person income is less than Rs 25000");
    }
    else if(age<21 && income<25000){
        printf("The person is not eligible for the loan.\nREASON : The person income is less than Rs 25000 and age is also less than 21 years.");
    }
    else if(age>60 && income<25000){
        printf("The person is not eligible forr the loan.\nREASON : The person income is less than Rs 25000 and age is more than 60 years.");
    }
    return 0;
}