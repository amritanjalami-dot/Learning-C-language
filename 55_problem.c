// Write a program to find the factorial of a number entered by the user.

#include <stdio.h>
int main(){
    int num;
    int fac = 1;
    printf("Enter the number whose factorial is to be taken out : ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++){
        fac = fac*i;
    }
    printf("Factorial is %d is %d", num, fac);
    return 0;
}