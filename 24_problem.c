// Write a program to take a number n from the user and print all multiples of 3 up to n using a while loop.

#include <stdio.h>
int main(){
    int n, i = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("The multiples of 3 up to %d are as follows :-\n", n);
    while(i <= n){
        if(i % 3 == 0){
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}