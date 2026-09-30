// Accept the number of electricity units consumed and the fixed rate per unit.
// Calculate the total electricity bill.
// bill=unit*rate.

#include <stdio.h>
int main()
{
    int bill, unit, rate;
    printf("Number of electricity units consumed: ");
    scanf("%d", &unit);
    printf("Rate of per unit: ");
    scanf("%d", &rate);
    bill = unit * rate;
    printf("As per the rate of per unit electricity that is Rs %d for %d units is Rs %d", rate, unit, bill);
    return 0;
}