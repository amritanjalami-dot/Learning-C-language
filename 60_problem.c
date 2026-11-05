/*
Find the sum of the series of squares: 1 + 4 + 9 + ... + N^2
*/

#include <stdio.h>
int main(){
    int n, square;
    int sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        square = i*i;
        sum = sum+i*i;
    }
    printf("Sum : %d", sum);
    return 0;
}