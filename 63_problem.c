// Write a program to enter numbers till the user wants.
// At the end it should display the count of positive, negative, zeros entered.

#include <stdio.h>
int main(){
    int num;
    char choice = 'y';
    int count_positive = 0;
    int count_negative = 0;
    int count_zeros = 0;
    for( ; choice == 'y' || choice == 'Y'; ){
        printf("Enter a number : ");
        scanf("%d", &num);
        if(num > 0){
            count_positive++;
        }
        else if(num < 0){
            count_negative++;
        }
        else{
            count_zeros++;
        }
        printf("Do you want to enter another number? (y/n) : ");
        scanf(" %c", &choice);
    }
    printf("Count of positive numbers : %d\n", count_positive);
    printf("Count of negative numbers : %d\n", count_negative);
    printf("Count of zeros : %d\n", count_zeros);
    return 0;
}