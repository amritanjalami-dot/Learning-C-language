// Input the temperature in °C and display:
// - Below 15: Cold
// - 15 to below 30: Pleasant
// - 30 or above: Hot

#include <stdio.h>
int main(){
    float temperature;
    printf("Enter the temperature in celsius : ");
    scanf("%f", &temperature);
    if(temperature<15){
        printf("Cold");
    }
    else if(temperature>=15 && temperature<30){
        printf("Pleasant");
    }
    else{
        printf("Hot");
    }
    return 0;
}