// // Read three angles of a triangle. 
// The triangle is valid only if every angle is greater than 0 and the sum is exactly 180. 
// If valid, classify it as acute, right or obtuse.

#include <stdio.h>
int main(){
    int angle_1;
    int angle_2;
    int angle_3;
    int sum;
    printf("\n");
    printf("=====TRIANGLE CLASSIFICATION=====\n\n");
    printf("Enter the first angle : ");
    scanf("%d", &angle_1);
    printf("Enter the second angle : ");
    scanf("%d", &angle_2);
    printf("Enter the third angle : ");
    scanf("%d", &angle_3);
    sum = angle_1+angle_2+angle_3;
    printf("The sum of the angles of the triangle is %d\n", sum);
    if(sum>180){
        printf("A triangle with %d, %d and %d is invalid.", angle_1, angle_2, angle_3);
    }
    else if(sum==180){
        printf("A triangle with %d, %d and %d angles is valid.\n", angle_1, angle_2, angle_3);
        if(angle_1==90||angle_2==90||angle_3==90){
            printf("It is a right angled triangle");
        }
        else if (angle_1>90||angle_2>90||angle_3>90){
            printf("Its an obtuse angled triangle");
        }
        else{
            printf("Its an acute angles triangle");
        }
    }
    return 0;
}