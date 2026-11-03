// Write a program to print a series : 2, 4, 6, 8, 10....till n numbers.

#include <stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    for(int i=2; i<=num; i++){
        if(i%2==0){
            printf("%d\n", i);
        }
    }
    return 0;
}