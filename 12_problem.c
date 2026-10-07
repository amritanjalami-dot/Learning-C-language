// Read weight (kg) and height (m). Calculate BMI = weight / (height × height) and print the category:
// below 18.5: Underweight
// 18.5 to 24.9: Normal
// 25 to 29.9: Overweight
// 30 and above: Obese
// Print "Invalid input" if weight or height is zero or negative.

#include <stdio.h>
int main(){
    float height;
    int weight;
    float bmi;
    printf("\n");
    printf("======BMI CALCULATOR======\n\n");
    printf("Enter the height of the person in meters: ");
    scanf("%f", &height);
    printf("Enter the weight of the person in kilograms: ");
    scanf("%d", &weight);
    if (weight<=0 || height<=0){
        printf("Invalid input");
    }
    bmi = weight/((float)height*height);
    printf("BMI : %.1f\n", bmi);
    if (bmi<18.5){
        printf("Underweight");
    }
    else if (bmi>=18.5 && bmi<=24.9){
        printf("Normal");
    }
    else if (bmi<=25 && bmi<=29.9){
        printf("Overweight");
    }
    else {
        printf("Obese");
    }
    return 0;
}