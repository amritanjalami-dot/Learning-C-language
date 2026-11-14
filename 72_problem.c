// Write a problem to count the number of even and odd digits in a number.

#include <stdio.h>
int main(){
    int num, rem;
    int even=0, odd=0;
    printf("Enter the number : ");
    scanf("%d", &num);
    while(num>0){
        if(num%2==0){
            rem = num%10;
            even++;
            num=num/10;
        }
        else{
            rem = num%10;
            odd++;
            num=num/10;
        }
    }
    printf("The number of even numbers : %d\n", even);
    printf("The number of odd numbers : %d\n", odd);
    return 0;
}