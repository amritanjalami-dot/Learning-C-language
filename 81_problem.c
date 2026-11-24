// Write a program to find the factorial of a given number.

#include <stdio.h>
int main(){
    int num, fact=1;
    printf("Enter the number whose factorial is to be taken out : ");
    scanf("%d", &num);
    for (int i=1; i<=num; i++){
        fact = fact*i;
    }
    printf("Factorial : %d", fact);
    return 0;
}