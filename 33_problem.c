// WAP to find the absolute value of the number entered by the user

#include <stdio.h>
int main(){
    int num, absolute_value;
    printf("Enter the number : ");
    scanf("%d", &num);
    if(num<0){
        absolute_value = -1*num;
        printf("Absolute value of %d is %d", num, absolute_value);
    }
    else{
        absolute_value = num;
        printf("Absolute number of %d is %d", num, absolute_value);
    }
    return 0;
}