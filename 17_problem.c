// Read a year and print which century it belongs to. 
// Years 1 to 100 are the 1st century, 101 to 200 the 2nd century, and so on, so 2000 is in the 20th century and 2001 is in the 21st. 
// Also print whether the year is a leap year. 
// Print "Invalid year" for zero or negative input.

#include <stdio.h>
int main(){
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
     if(year==0 || year<0){
        printf("Invalid Year");
    }
    else if(year>=1 && year<=100){
        printf("1st century\n");
    }
    else if(year>=101 && year<=200){
        printf("2nd century\n");
    }
    else if(year>=201 && year<=300){
        printf("3rd century\n");
    }
    else if(year>=301 && year<=400){
        printf("4th century\n");
    }
    else if(year>=401 && year<=500){
        printf("5th century\n");
    }
    else if(year>=501 && year<=600){
        printf("6th century\n");
    }
    else if(year>=601 && year<=700){
        printf("7th century\n");
    }
    else if(year>=701 && year<=800){
        printf("8th century\n");
    }
    else if(year>=801 && year<=900){
        printf("9th century\n");
    }
    else if(year>=901 && year<=1000){
        printf("10th century\n");
    }
    else if(year>=1001 && year<=1100){
        printf("11th century\n");
    }
    else if(year>=1101 && year<=1200){
        printf("12th century\n");
    }
    else if(year>=1201 && year<=1300){
        printf("13th century\n");
    }
    else if(year>=1301 && year<=1400){
        printf("14th century\n");
    }
    else if(year>=1401 && year<=1500){
        printf("15th century\n");
    }
    else if(year>=1501 && year<=1600){
        printf("16th century\n");
    }
    else if(year>=1601 && year<=1700){
        printf("17th century\n");
    }
    else if(year>=1701 && year<=1800){
        printf("18th century\n");
    }
    else if(year>=1801 && year<=1900){
        printf("19th century\n");
    }
    else if(year>=1901 && year<=2000){
        printf("20th century\n");
    }
    else if(year>=2001 && year<=2100){
        printf("21st century\n");
    }
    if(year%4==0){
        printf("Its a leap year\n");
    }
    else{
        printf("It is not a leap year\n");
    }
    return 0;
}