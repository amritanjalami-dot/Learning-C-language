/*
Print the alternate sign series: 1 -2 3 -4 5 -6 ... up to N terms and also find its sum.
*/

#include <stdio.h>
int main(){
    int n;
    int sum = 0;
    printf("Enter the number till which the series shall continue : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i%2==0){
            printf("-%d ", i);
            sum = sum - i;
        }
        else{
            printf("%d ", i);
            sum = sum+i;
        }
    }
    printf("\nSum : %d", sum);
    return 0;
}