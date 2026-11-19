// Write a program to find the sum of the second and fourth elements of an array.

#include <stdio.h>
int main(){
    int a[5];
    int sum=0;
    for(int i=0; i<5; i++){
        printf("Enter the elements : ");
        scanf("%d", &a[i]);
    }
    sum = a[1]+a[3];
    printf("Sum of the second and fourth element : %d", sum);
    return 0;
}