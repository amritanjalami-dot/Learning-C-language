// Write a C program to input marks out of 100. Use an if–else-if ladder to display the grade:
// 80 or above: A
// 60–79: B
// 40–59: C
// Below 40: Fail

#include <stdio.h>
int main(){
    int marks;
    printf("Enter the marks : ");
    scanf("%d", &marks);
    if(marks>100 || marks<0){
        printf("Invalid");
    }
    else{
        if(marks>=80){
            printf("Grade A");
        }
        else if(marks>=60 && marks<80){
            printf("Grade B");
        }
        else if(marks>=40 && marks<60){
            printf("Grade C");
        }
        else{
            printf("Fail");
        }
    }
    return 0;
}