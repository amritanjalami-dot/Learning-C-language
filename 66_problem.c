// Write a program that takes n from the user and prints a number triangle with n rows.
// Input: 5
// Output:
// 1
// 12
// 123
// 1234
// 12345

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}