// Write a program to calculate the sum of square of even n natural numbers. Take the value of n from the user.

#include <stdio.h>
int main(){
    int num, square;
    int sum = 0;
    printf("Enter even number : ");
    scanf("%d", &num);
    if(num%2!=0){
        printf("Invalid input\n");
        return 0;
    }
    for(int i=2; i<=num; i+=2){
        square = i*i;
        sum = sum + square;
    }
    printf("Sum of the squares : %d\n", sum);
    return 0;
}