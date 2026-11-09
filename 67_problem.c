// Write a program that takes n from the user and prints each row number repeated that many times.
// Input: 5
// Output:
// 1
// 22
// 333
// 4444
// 55555

#include <stdio.h>
int main(){
    int num;
    printf("Enter the number of rows : ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}