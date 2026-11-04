/*
Write a C program to print a square pattern of stars of size N x N, where N is entered by the user.

    Sample Input : 3
    Sample Output:
    * * *
    * * *
    * * *
*/

#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of square pattern : ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}