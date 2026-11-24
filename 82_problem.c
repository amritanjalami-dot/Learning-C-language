// Write a program to find the sum of first n natural numbers using a while loop

#include <stdio.h>
int main(){
    int num, i=0;
    int sum = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    while(i<=num){
        sum = sum+i;
        i++;
    }
    printf("Sum : %d", sum);
    return 0;
}