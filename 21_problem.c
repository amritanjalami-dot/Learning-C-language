// Read n and print the sum of all odd numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;
    int i = 1;
    int sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    while (i <= n) {
        if (i % 2 != 0) {      
            sum = sum + i;     
        }
        i++;                 
    }
    printf("The sum of odd numbers from 1 to %d is %d\n", n, sum);
    return 0;
}