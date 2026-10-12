// Write a C program to accept two integers and check whether they are equal or not.

#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);
    if(num1==num2){
        printf("Both the numbers are equal.");
    }
    else {
        printf("The two numbers entered are not equal.");
    }
    return 0;
}