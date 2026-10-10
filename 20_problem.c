// Read a number n and print the multiplication table of n, from 1 to 10.

#include <stdio.h>
int main(){
    int n;
    int i=1;
    printf("\n=====MULTIPLICATION TABLE=====\n\n");
    printf("Enter the number : ");
    scanf("%d", &n);
    while(i<=10){
        printf("%d X %d = %d\n", n, i, n*i);
        i++;
    }
    return 0;
}