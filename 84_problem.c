// Write a program to check whether a number is prime or not.

#include <stdio.h>
int main() {
    int num, isPrime = 1;
    printf("Enter the number : ");
    scanf("%d", &num);
    if (num <= 1) {
        isPrime = 0;
    } 
    else {
        for (int i = 2; i < num; i++){
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if(isPrime == 1){
        printf("%d is a prime number.", num);
    } 
    else{
        printf("%d is not a prime number.", num);
    }
    return 0;
}