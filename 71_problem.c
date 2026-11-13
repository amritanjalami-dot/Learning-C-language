//Write a program to count the number of digits of a number entered by the user.

#include <stdio.h>
int main(){
    int num, rem;
    int i=0;
    printf("\n");
    printf("===== DIGIT COUNT =====\n\n");
    printf("Enter the number : ");
    scanf("%d", &num);
    while(num>0){
        rem=num%10;
        i++;
        num=num/10;
    }
    printf("The number of digits is %d", i);
    return 0;
}