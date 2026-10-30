// WAP to check whether a number is even or odd using ternary operator

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    (n%2==0) ? printf("Its an even number") : printf("Its an odd number");
    return 0;
}