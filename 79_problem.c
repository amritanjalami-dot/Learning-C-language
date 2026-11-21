// Write a program to find the smallest element in an array of 5 numbers entered by the user.

#include <stdio.h>
int main() {
    int a[5];
    int smallest;
    for(int i = 0; i < 5; i++){
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &a[i]);
    }
    smallest = a[0];
    for(int i = 1; i < 5; i++){
        if(a[i] < smallest) {
            smallest = a[i];
        }
    }
    printf("Smallest element = %d", smallest);
    return 0;
}