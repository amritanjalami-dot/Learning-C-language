/*
Movie Ticket Price
Accept the age of a person and the number of tickets, then print the
total ticket price.

    Age                 Price per ticket
    Below 5 years       Free
    5 - 12 years        Rs. 100
    13 - 59 years       Rs. 200
    60 years and above  Rs. 120

Print "Invalid age" if the age is less than 0 or greater than 120.
*/

#include <stdio.h>
int main(){
    int age, ticket, price;
    printf("\n");
    printf("===== MOVIE TICKET PRICE =====\n\n");
    printf("Enter the age of the person : ");
    scanf("%d", &age);
    printf("Enter the number of tickets : ");
    scanf("%d", &ticket);
    if(age<0 || age>120){
        printf("Invalid age");
    }
    else{
        if(age<5){
            printf("Free!!");
            price = 0;
        }
        else if(age>=5 && age<=12){
            price = ticket*100;
        }
        else if(age>=13 && age<=59){
            price = ticket*200;
        }
        else{
            price = ticket*120;
        }
        printf("Price of the ticket : %d", price);
    }
    return 0;
}