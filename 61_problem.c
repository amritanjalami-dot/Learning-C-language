/*
Print the series: 5 10 15 20 25 ... (first N terms of table of 5)
*/

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number till which the series shall continue : ");
    scanf("%d", &n);
    for(int i=5; i<=n; i++){
        if(i%5==0){
            printf("%d\n", i);
        }
    }
    return 0;
}