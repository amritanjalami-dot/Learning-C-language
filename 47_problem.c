// WAP to check if a number is positive or negative using ternary operator

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    (n>0) ? printf("Positive\n") : printf("Negative\n");
    return 0;
}