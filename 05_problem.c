// Write a program to swap two numbers.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("The swapped values are:\na=%d\nb=%d\n", a, b);
    return 0;
}