// Write a program to find the last digit of the number entered by the user

#include <stdio.h>
int main()
{
    int num;
    int last;
    printf("Enter the number: ");
    scanf("%d", &num);
    last = num % 10;
    printf("The last digit of %d is %d", num, last);
    return 0;
}