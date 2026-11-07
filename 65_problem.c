// Write a program that takes n from the user and prints an inverted triangle of stars with n rows.
// Input: 5
// Output:
// *****
// ****
// ***
// **
// *

#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the pattern : ");
    scanf("%d", &n);
    for(int i = n; i>=1; i--){
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}