// Input weight in kilograms and convert it into grams and milligrams.

#include <stdio.h>
int main()
{
    float kg, g, mg;
    printf("Enter the weight in kilograms: ");
    scanf("%f", &kg);
    g = kg * 1000;
    mg = g * 1000;
    printf("The weight in grams is %.1f g and in milligram is %.1f mg.\n", g, mg);
    return 0;
}