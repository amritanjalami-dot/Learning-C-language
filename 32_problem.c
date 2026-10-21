// If the three sides of the triangle are entered through the keyboard, WAP to check whether the triangle is isosceles, equilateral, scalene, or right angled triangle

#include <stdio.h>
int main(){
    int side1, side2, side3;
    printf("Enter the length of first side of the triangle : ");
    scanf("%d", &side1);
    printf("Enter the length of second side of the triangle : ");
    scanf("%d", &side2);
    printf("Enter the length of third side of the triangle : ");
    scanf("%d", &side3);
    if (side1 <= 0 || side2 <= 0 || side3 <= 0 ||
        side1 + side2 <= side3 || side2 + side3 <= side1 || side1 + side3 <= side2){
        printf("Invalid triangle");
    }
    else{
        if (side1 == side2 && side2 == side3){
            printf("It is an equilateral triangle\n");
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3){
            printf("It is an isosceles triangle\n");
        }
        else{
            printf("It is a scalene triangle\n");
        }
    if (side1*side1 == side2*side2 + side3*side3 ||
        side2*side2 == side1*side1 + side3*side3 ||
        side3*side3 == side1*side1 + side2*side2){
            printf("It is also a right angled triangle\n");
        }
    }
    return 0;
}