// Write a program to calculate thhe sum of cubes of first n natural numbers. Take n as user input.

#include <stdio.h>
int main(){
    int num, cube;
    int sum = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++){
        cube = i*i*i;
        sum = sum+cube;
    }
    printf("Sum of cubes : %d", sum);
    return 0;
}