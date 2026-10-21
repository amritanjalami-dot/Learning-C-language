// WAP to find whether the area of the rectangle is greater than its perimeter.

#include <stdio.h>
int main(){
    int length, breadth, area, perimeter;
    printf("Enter the length of the rectangle : ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle : ");
    scanf("%d", &breadth);
    if(length <= 0 || breadth <= 0){
        printf("Invalid input");
    }
    else{
        area = length * breadth;
        perimeter = 2*(length+breadth);
        if (area==perimeter){
            printf("Both area and perimeter of the rectangle is equal");
        }
        else if (area>perimeter){
            printf("Area is greater than the perimeter of the rectangle");
        }
        else{
            printf("Perimeter is greater than the area of the rectangle");
        }
    }
    return 0;
}