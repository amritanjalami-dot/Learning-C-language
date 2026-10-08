// Read three integers and check whether any one of them equals the sum of the other two. Print which one.

#include <stdio.h>
int main(){
    int n1, n2, n3, sum1, sum2, sum3;
    printf("Enter the first number : ");
    scanf("%d", &n1);
    printf("Enter the second number : ");
    scanf("%d", &n2);
    printf("Enter the third number : ");
    scanf("%d", &n3);
    sum1 = n1+n2;
    sum2 = n2+n3;
    sum3 = n3+n1;
    if(sum1==n3){
        printf("%d + %d = %d", n1, n2, n3);
    }
    else if(sum2==n1){
        printf("%d + %d = %d", n2, n3, n1);
    }
    else if(sum3==n2){
        printf("%d + %d = %d", n3, n1, n2);
    }
    else {
        printf("No relation");
    }
    return 0;
}