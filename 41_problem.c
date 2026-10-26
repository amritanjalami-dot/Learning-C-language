/*
A certain grade of steel is graded according to the following conditions: 

(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600

The grades are as follows : 

Grade is 10 if all conditions are met.
Grade is 9 if conditions (i) and (ii) are met.
Grade is 8 if conditions (ii) and (iii) are met.
Grade is 7 if conditions (i) and (iii) are met.
Grade is 6 if only one condition is met.
Grade is 5 if none of the conditions are met.

Write a program, which will require the user to give values of hardness, carbon content and tensile strength of
the steel under consideration and output the grade of the steel.
*/

#include <stdio.h>
int main() {
    int hardness, tensile_strength;
    float carbon_content;
    printf("\n===== GRADE OF STEEL =====\n\n");
    printf("Enter the hardness of the steel : ");
    scanf("%d", &hardness);
    printf("Enter the carbon content of the steel : ");
    scanf("%f", &carbon_content);
    printf("Enter the tensile strength of the steel : ");
    scanf("%d", &tensile_strength);
    if (hardness < 0 || carbon_content < 0 || tensile_strength < 0) {
        printf("Invalid input\n");
    } else {
        int c1 = hardness > 50;
        int c2 = carbon_content < 0.7f;
        int c3 = tensile_strength > 5600;
        if (c1 && c2 && c3) {
            printf("Grade : 10\n");
        } else if (c1 && c2) {
            printf("Grade : 9\n");
        } else if (c2 && c3) {
            printf("Grade : 8\n");
        } else if (c1 && c3) {
            printf("Grade : 7\n");
        } else if (c1 || c2 || c3) {
            printf("Grade : 6\n");
        } else {
            printf("Grade : 5\n");
        }
    }
    return 0;
}