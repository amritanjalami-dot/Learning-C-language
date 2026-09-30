// Accept the cost price and selling price of an item and calculate: 1. profit=sellingPrice-costPrice
// 2. profitPercentage = profit/costPrice * 100

#include <stdio.h>
int main()
{
    int cost;
    int selling;
    int profit;
    float profit_percentage;
    printf("Enter the cost price of the item: ");
    scanf("%d", &cost);
    printf("Enter the selling price: ");
    scanf("%d", &selling);
    profit = selling - cost;
    profit_percentage = ((float)profit / cost) * 100.0;
    printf("Profit earned on the item is Rs %d\n", profit);
    printf("Profit percentage on this particular item is %.1f", profit_percentage);
    return 0;
}