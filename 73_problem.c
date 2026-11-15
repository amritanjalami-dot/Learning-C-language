// Write a program to find the sum of the digits of the number.

#include <stdio.h>
int main(){
    int num, original;
    int rem = 0, sum = 0;
    printf("Enter the number whose digits sum is to be taken out : ");
    scanf("%d", &num);
    original=num;
    while(num>0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("The sum of the digits of %d is %d", original, sum);
    return 0;
}