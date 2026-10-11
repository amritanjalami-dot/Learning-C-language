// Write a program to take two numbers (start and end) from the user and print all numbers between them.

#include <stdio.h>
int main(){
    int num1;
    int num2;
    int sum=0;
    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);
    for(int i=num1 ; i<=num2 ; i++){
        sum = sum + i;
    }
    printf("The sum of all numbers from %d to %d is %d", num1, num2, sum);
    return 0;
}