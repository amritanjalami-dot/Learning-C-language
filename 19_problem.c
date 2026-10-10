// Read a number n and print the sum of the first n natural numbers and the sum of their squares.

#include <stdio.h>
int main(){
    int n;
    int i=1;
    int sum=0;
    int sum_square=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    while (i<=n)
    {
       sum=sum+i;
       sum_square=sum_square+i*i;
       i++;
    }
    printf("Sum of first %d natural number is %d\n", n, sum);
    printf("Sum of squares of first %d natural number is %d", n, sum_square);
    return 0;
}