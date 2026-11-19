// Write a program to find the largest element in an array of 5 numbers entered by the user.

#include <stdio.h>
int main() {
    int a[5];
    int largest;
    for(int i = 0; i < 5; i++){
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &a[i]);
    }
    largest = a[0];
    for(int i = 1; i < 5; i++){
        if(a[i] > largest) {
            largest = a[i];
        }
    }
    printf("Largest element = %d", largest);
    return 0;
}