// Write a program to calculate the average of all elements of an array.

#include <stdio.h>
int main() {
    int a[5];
    int sum = 0;
    float average;
    for(int i = 0; i < 5; i++) {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 5; i++) {
        sum = sum + a[i];
    }
    average = (float)sum / 5;
    printf("Average of array elements = %.2f", average);
    return 0;
}