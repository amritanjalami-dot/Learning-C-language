// Write a program to reverse a given number and check whether it is a palindrome.

#include <stdio.h>
int main(){
    int num, original, rem;
    int rev = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    original = num;
    while(num>0){
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    printf("The reverse of the number %d is %d\n", original, rev);
    if(original == rev){
        printf("%d is a palindromic number", original);
    }
    else{
        printf("%d is not palindromic number", original);
    }
    return 0;
}