#include <stdio.h>
int main(){
    int ram_age, shyam_age, ajay_age;
    printf("Enter the age of Ram : ");
    scanf("%d", &ram_age);
    printf("Enter the age of Shyam : ");
    scanf("%d", &shyam_age);
    printf("Enter the age of Ajay : ");
    scanf("%d", &ajay_age);
    if(ram_age < 0 || shyam_age < 0 || ajay_age < 0){
        printf("Invalid Age");
    }
    else{
        if(ram_age == shyam_age && shyam_age == ajay_age){
            printf("Ram, Shyam and Ajay are of same age");
        }
        else if(ram_age < shyam_age && ram_age < ajay_age){
            printf("Ram is the youngest among the three");
        }
        else if(shyam_age < ram_age && shyam_age < ajay_age){
            printf("Shyam is the youngest among the three");
        }
        else if(ajay_age < ram_age && ajay_age < shyam_age){
            printf("Ajay is the youngest among the three");
        }
        else if(ram_age == shyam_age && ram_age < ajay_age){
            printf("Ram and Shyam are the youngest (same age)");
        }
        else if(ram_age == ajay_age && ram_age < shyam_age){
            printf("Ram and Ajay are the youngest (same age)");
        }
        else{
            printf("Shyam and Ajay are the youngest (same age)");
        }
    }
    return 0;
}