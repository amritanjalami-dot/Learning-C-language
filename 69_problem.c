// Write a program that takes n from the user and prints a pyramidof numbers with n rows.
//     1
//    2 2
//   3 3 3
//  4 4 4 4
// 5 5 5 5 5

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}