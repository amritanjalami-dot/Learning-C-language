// Write a program to find the sum of numbers between the first and last numbers entered by the user, excluding multiples of 3.

#include <stdio.h>
int main(){
    int num_1, num_2;
    int sum = 0;
    printf("Enter the first number : ");
    scanf("%d", &num_1);
    printf("Enter the last number : ");
    scanf("%d", &num_2);
    for(int i=num_1; i<=num_2; i++){
        if(i%3==0){
            continue;
        }
        sum = sum + i;
    }
    printf("The sum excluding multiples of 3 is : %d", sum);
    return 0;
}