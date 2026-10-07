// Read the marks of three subjects. 
// A student passes only if every subject is at least 33 and the average is at least 40. 
// If the student fails, print the reason.

#include <stdio.h>
int main(){
    int m1, m2, m3, sum, average;
    printf("Enter the marks of 1st subject : ");
    scanf("%d", &m1);
    printf("Enter the marks of 2nd subject : ");
    scanf("%d", &m2);
    printf("Enter the marks of 3rd subject : ");
    scanf("%d", &m3);
    sum = m1+m2+m3;
    average = sum/3;
    printf("Total marks scored : %d\n", sum);
    printf("Average : %d\n", average);
    if(m1<33 && average<40){
        printf("FAILED\n");
        printf("REASON : Scored less than 33 marks in the 1st subject and average is less than 40\n");
    }
    else if(m2<33 && average<40){
        printf("FAILED\n");
        printf("REASON : Scored less than 33 marks in the 2nd subject and average is less than 40\n");
    }
    else if(m3<33 && average<40){
        printf("FAILED\n");
        printf("REASON : Scored less than 33 marks in the 3rd subject and average is less than 40\n");
    }
    else if(m1<33){
        printf("FAILED\n");
        printf("REASON : Scored less than 33 marks in the 1st subject\n");
    }
    else if(m2<33){
        printf("FAILED\n");
        printf("REASON : Scored less than 33 marks in the 2nd subject\n");
    }
    else if(m3<33){
        printf("FAILED\n");
        printf("REASON : Scored less than 33 marks in the 3rd subject\n");
    }
    else if (average<40){
        printf("FAILED\n");
        printf("REASON : Average of the three subjct is less than 40\n");
    }
    else if(m1>=33 && m2>=33 && m3>=33 && average>=40){
        printf("PASSED\n");
    }
    return 0;
}