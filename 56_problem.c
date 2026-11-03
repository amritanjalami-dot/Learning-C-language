// Write a program to calculate power of a number

#include <stdio.h>
int main(){
    int num, power;
    int result = 1;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Enter the power of the number : ");
    scanf("%d", &power);
    for(int i=1; i<=power; i++){
        result = result*num;
    }
    printf("Result : %d", result);
    return 0;
}