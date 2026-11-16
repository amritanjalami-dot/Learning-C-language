// Write a program to find the reverse of the number entered by the user.

#include <stdio.h>
int main(){
    int num, rem;
    int rev=0;
    printf("Enter the number : ");
    scanf("%d", &num);
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("The reverse of the number : %d", rev);
    return 0;
}