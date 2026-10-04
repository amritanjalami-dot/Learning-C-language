// Read the length and breadth of a rectangle and the side of a square. 
// Print which has the larger area, or "Equal areas". 
// Print "Invalid input" if any value is zero or negative.

#include <stdio.h>
int main(){
    int length;
    int breadth;
    int side;
    int area_rectangle;
    int area_square;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the bradth of the rectangle: ");
    scanf("%d", &breadth);
    printf("Enter the length of the side of the square: ");
    scanf("%d", &side);
    area_rectangle=length*breadth;
    area_square=side*side;
    if(length<=0 || breadth<=0 || side<=0){
        printf("Invalid Input");
    }
    else if(area_rectangle>area_square){
        printf("Rectangle has larger area than the square");
    }
    else if(area_rectangle<area_square){
        printf("Square has larger area than the rectangle");
    }
    else if(area_rectangle==area_square){
        printf("Both rectangle and square has equal areas");
    }
    return 0;
}