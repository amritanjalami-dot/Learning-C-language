// Read n and count how many numbers from 1 to n are divisible by 3

#include <stdio.h>

int main() {
    int n;
    int i = 1;
    int count = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    while (i <= n) {
        if (i % 3 == 0) {
            printf("%d, ", i);
            count++;           
        }
        i++;
    }
    printf("Numbers divisible by 3 from 1 to %d : %d\n", n, count);
    return 0;
}